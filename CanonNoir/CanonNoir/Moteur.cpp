#include "Moteur.h"
#include "AttenteNbJoueurs.h"
#include "ChoisirPort.h"
#include "SetOrdreJoueurs.h"
#include "LancerDesDeplacement.h"
#include "Navigation.h"
#include "TirCanonDuel.h"
#include "TirCanonUnique.h"
#include "PartieGagnee.h"

Moteur::Moteur(){
	this->nbJoueurs = 0;
	this->joueurCourant = 1;
	this->click = std::make_pair(0,0);
	this->numEtatCourant = ATTENTENBJOUEURS;
	this->des.first = De::De(1);
	this->des.second = De::De(2);
	//pour avoir des lancer de d�s diff�rents
	des.second.numero=1;
	this->plateau = Plateau::Plateau();
	this->etat= new AttenteNbJoueurs();
}

Moteur::~Moteur(){
	delete this->etat;
}

void Moteur::setNbJoueurs(int nb){
	this->nbJoueurs = nb;
	this->setEtat(CHOISIRPORT);
	this->execute();
}

void Moteur::setClick(int x,int y){
	this->click.first = x;
	this->click.second = y;
	this->execute();
}


void Moteur::setEtat(int e){
	if(e!=this->numEtatCourant){
		delete this->etat;
		this->numEtatCourant = e;
		switch(e) {
			case ATTENTENBJOUEURS:
				this->etat = new AttenteNbJoueurs(this);
				break;
			case CHOISIRPORT:
				this->etat = new ChoisirPort(this);
				break; 
			case SETORDREJOUEURS: 
				this->etat = new SetOrdreJoueurs(this);
				break;
			case LANCERDESDEPLACEMENT:
				this->etat = new LancerDesDeplacement(this);
				break;
			case NAVIGATION:
				this->etat = new Navigation(this);
				break;
			case TIRCANONDUEL:
				this->etat = new TirCanonDuel(this);
				break;
			case TIRCANONUNIQUE:
				this->etat = new TirCanonUnique(this);
				break;
			case PARTIEGAGNEE:
				this->etat = new PartieGagnee(this);
				break;
		}
	}
}

int* Moteur::getPosBateaux(){
	joueurs.at(0);
	int* res = (this->nbJoueurs==3)? new int[15] : new int[20];
	int cpt = 0;
	for(int i=0;i<nbJoueurs;i++){
		res[cpt*5] = joueurs.at(cpt).getBateau(1)->getPosition().first;
		res[(cpt+1)*5] = joueurs.at(cpt).getBateau(1)->getPosition().second;
		res[(cpt+2)*5] = joueurs.at(cpt).getBateau(1)->aTresorABord();
		res[(cpt+3)*5] = joueurs.at(cpt).getBateau(1)->getType();
		res[(cpt+4)*5] = joueurs.at(cpt).getBateau(1)->getNumPort();
		if(nbJoueurs==2){
			cpt++;
			res[cpt*5] = joueurs.at(cpt).getBateau(2)->getPosition().first;
			res[(cpt+1)*5] = joueurs.at(cpt).getBateau(2)->getPosition().second;
			res[(cpt+2)*5] = joueurs.at(cpt).getBateau(2)->aTresorABord();
			res[(cpt+3)*5] = joueurs.at(cpt).getBateau(2)->getType();
			res[(cpt+4)*5] = joueurs.at(cpt).getBateau(2)->getNumPort();
		}
		cpt++;
	}
	return res;
}

void Moteur::execute(){
	this->etat->execute();
}

void Moteur::addJoueur(int ind,int num,int nbBat,int nbPort1,int nbPort2){
	this->joueurs.push_back(Joueur::Joueur(num,nbBat,nbPort1,nbPort2=0));
}

void Moteur::lancerDes(){
	this->des.first.lancerDe();
	this->des.second.lancerDe();
}

void Moteur::passerAuJoueurSuivant(){
	int index;
	for(int i=0;i<this->nbJoueurs;i++){
		if(this->ordreJoueurs.at(i)==this->joueurCourant) index = i;
	}
	this->joueurCourant = this->ordreJoueurs.at((index+1)%this->nbJoueurs);
}