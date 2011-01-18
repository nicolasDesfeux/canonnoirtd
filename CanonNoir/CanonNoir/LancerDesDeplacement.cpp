#include "LancerDesDeplacement.h"
#include "Moteur.h"
#include <math.h>
#include <sstream>

void LancerDesDeplacement::execute(){
	
	this->moteur->lancerDes();
	int de1 = this->moteur->getDe1();
	int de2 = this->moteur->getDe2();
	
	
	ostringstream mes;
	mes << "Joueur ";
	mes << this->moteur->getJoueurCourant();
	mes << ", choisissez la case o� vous souhaitez vous d�placer.";
	this->setMessage(mes.str());
	this->calculCasesDeplacement(de1,de2);
}

void LancerDesDeplacement::calculCasesDeplacement(int de1,int de2){
	this->moteur->getCasesDeplacementBateau().clear();
	int totalDes = de1 + de2;
	int nbDes = this->moteur->getJoueur(this->moteur->getJoueurCourant()).getBateau(1).getNbDes();
	this->activeDe2 = (nbDes==2);
	std::pair<int,int> caseDepart = this->moteur->getJoueur(this->moteur->getJoueurCourant()).getBateau(1).getPosition();
	std::set<std::pair<int,int>> res;
	res.insert(caseDepart);
	int i = de1;
	while(i--!=0){
		res = calculCasesDeplacementRec(caseDepart,res);
	}
	this->casesDeplacement.insert(res.begin(),res.end());
	res.clear();
	res.insert(caseDepart);
	/*
	if(nbDes==2){
		i = de2+1;
		while(i--!=0){
			res = calculCasesDeplacementRec(caseDepart,res);
		}
		this->casesDeplacement.insert(res.begin(),res.end());
		res.clear();
		res.insert(caseDepart);
		i = totalDes+1;
		while(i--!=0){
			res = calculCasesDeplacementRec(caseDepart,res);
		}
		this->casesDeplacement.insert(res.begin(),res.end());
		res.clear();
		res.insert(caseDepart);
	}
	*/
	this->setCasesDeplacementBateau(this->casesDeplacement,1);
	/*
	if(this->moteur->getNbJoueurs()==2){
		nbDes = this->moteur->getJoueur(this->moteur->getJoueurCourant()).getBateau(2).getNbDes();
		this->activeDe2 |= (nbDes==2);
		caseDepart = this->moteur->getJoueur(this->moteur->getJoueurCourant()).getBateau(2).getPosition();
		de1++;
		while(de1--!=0){
			res = calculCasesDeplacementRec(caseDepart,res);
		}
		this->setCasesDeplacementBateau(res,2);
		this->casesDeplacement.insert(res.begin(),res.end());
		res.clear();
		res.insert(caseDepart);
		if(nbDes==2){
			de2++;
			while(de2--!=0){
				res = calculCasesDeplacementRec(caseDepart,res);
			}
			this->setCasesDeplacementBateau(res,2);
			this->casesDeplacement.insert(res.begin(),res.end());
			res.clear();
			res.insert(caseDepart);
			totalDes++;
			while(totalDes--!=0){
				res = calculCasesDeplacementRec(caseDepart,res);
			}
			this->setCasesDeplacementBateau(res,2);
			this->casesDeplacement.insert(res.begin(),res.end());
			res.clear();
		}
	}
	*/
}

std::set<std::pair<int,int>> LancerDesDeplacement::calculCasesDeplacementRec(const std::pair<int,int>& caseDepart,const std::set<std::pair<int,int>>& casesChemin){
	std::set<std::pair<int,int>> res;
	std::set<std::pair<int,int>>::iterator it;
	for(it=casesChemin.begin();it!=casesChemin.end();it++){
		//casesChemin.erase(it);
		double dist = distCases(caseDepart,*it);
		std::set<std::pair<int,int>> casesPotentielles = this->casesAutour(*it);
		std::set<std::pair<int,int>>::iterator it2;
		for(it2=casesPotentielles.begin();it2!=casesPotentielles.end();it2++){
			double dist2 = distCases(caseDepart,*it2);
			if(dist<dist2){
				res.insert(*it2);
			}
		}
	}
	return res;
}

double LancerDesDeplacement::distCases(const std::pair<int,int>& case1,const std::pair<int,int>& case2){
	return pow((double)(case1.first - case2.first),2) + pow((double)(case1.second - case2.second),2);
}

std::set<std::pair<int,int>> LancerDesDeplacement::casesAutour(const std::pair<int,int>& case1){
	std::set<std::pair<int,int>> res;
	int longueur = this->moteur->getPlateau().getLongueur();
	int largeur = this->moteur->getPlateau().getLargeur();
	for(int i=-1;i<2;i++){
		for(int j=-1;j<2;j++){
			int x = case1.first+i;
			int y = case1.second+j;
			if((i!=0 || j!=0) && (x<=longueur) && (y<=largeur) && (x>0) && (y>0)){
				if(this->moteur->getPlateau().estNavigable(x,y)){
					res.insert(std::make_pair(x,y));
				}
			}
		}
	}
	return res;
}

int* LancerDesDeplacement::getCasesActives() const{
	int nbCases = this->moteur->getPlateau().getLongueur() * this->moteur->getPlateau().getLargeur();
	int* res = new int[this->moteur->getPlateau().getLongueur()*this->moteur->getPlateau().getLargeur()];
	for(int i=0;i<nbCases;i++){
		std::set<std::pair<int,int>>::iterator it;
		bool found = false;
		for(it=this->casesDeplacement.begin();it!=this->casesDeplacement.end();it++){
			int x = (*it).first-1;
			int y = ((*it).second-1)*this->moteur->getPlateau().getLongueur();
			if((x+y)==i) found = true;
		}
		res[i] = (found)? 1 : 0;
	}
	return res;
}

int LancerDesDeplacement::getEtat() const{
	return Moteur::NAVIGATION;
}

void LancerDesDeplacement::setCasesDeplacementBateau(std::set<std::pair<int,int>>& cases,int value){
	std::set<std::pair<int,int>>::iterator it;
	for(it=cases.begin();it!=cases.end();it++){
		this->moteur->getCasesDeplacementBateau().insert(std::pair<std::pair<int,int>,int>(*it,value));
	}
}