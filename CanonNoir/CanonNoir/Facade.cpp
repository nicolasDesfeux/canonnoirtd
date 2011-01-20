#include "Facade.h"
#include "SetOrdreJoueurs.h"
#include <iostream>

Facade::Facade(){
	this->motor = new Moteur();
	int dim = this->motor->getPlateau().getLongueur()*this->motor->getPlateau().getLargeur();
	this->casesActives = new int[dim];
	for(int i=0;i<dim;i++){
		this->casesActives[i] = 0;
	}
	this->affichePlateau = true;
	this->afficheCanon = false;
	this->affichePorts = false;
	this->afficheBat = false;
	this->message = this->motor->getEtat()->getMessage();
	this->scoresBateaux = NULL;
	this->nbBateaux = 0;
	this->afficheAttenteNbJoueurs = true;
	this->afficheJeuNormal = false;
	this->activeDe1 = false;
	this->activeDe2 = false;
	this->activeCases = false;
	this->activeLancerDes = false;
	this->de1 = 1;
	this->de2 = 1;
	this->motor->execute();
}

Facade::~Facade(){
	delete this->motor;
	delete[] this->casesActives;
	delete[] this->scoresBateaux;
}

void Facade::setNbJoueurs(int nb){
	this->motor->setNbJoueurs(nb);
	this->message = this->motor->getEtat()->getMessage();
	this->nbBateaux = (nb==3)? 3 : 4;
	this->scoresBateaux = new int[this->nbBateaux];
	for(int i=0;i<this->nbBateaux;i++) this->scoresBateaux[i] = 0;
	this->afficheAttenteNbJoueurs = false;
	this->afficheJeuNormal = true;
	this->activeDe1 = false;
	this->activeDe2 = false;
	this->activeLancerDes = false;
	this->affichePorts=true;
	this->miseAJourCasesActives(this->motor->getEtat()->getCasesActives());
	this->activeCases = true;
	this->infosBateaux = (this->motor->getNbJoueurs()==3)? new int[15] : new int[20];
}

void Facade::setClick(int x,int y){
	
	this->motor->setClick(x,y);
	this->message = this->motor->getEtat()->getMessage();
	this->miseAJourCasesActives(this->motor->getEtat()->getCasesActives());
	if(this->motor->getEtat()->getEtat()==Moteur::CHOISIRPORT){
		this->activeCases = true;
	}
	else if(this->motor->getEtat()->getEtat()==Moteur::SETORDREJOUEURS){
		delete[] this->infosBateaux;
		cout<<"AvantFacade"<<endl;
		this->infosBateaux = this->motor->getPosBateaux();
		cout<<"AprèsFacade"<<endl;
		/*cout<<"begin"<<endl;
		for(int i=0;i<15;i++){
			cout<<infosBateaux[i]<<endl;
		}*/
		this->motor->setEtat(Moteur::SETORDREJOUEURS);
		this->activeLancerDes = true;
		this->activeDe1 = true;
		this->activeDe2 = true;
		this->activeCases = false;
		this->affichePorts = false;
		this->afficheBat = true;	
	
	}
	else if(this->motor->getEtat()->getEtat()==Moteur::LANCERDESDEPLACEMENT){
		delete[] this->infosBateaux;
		this->infosBateaux = this->motor->getPosBateaux();
		/*cout<<"begin"<<endl;
		for(int i=0;i<15;i++){
			cout<<infosBateaux[i]<<endl;
		}*/
		this->motor->setEtat(Moteur::LANCERDESDEPLACEMENT);
		this->activeLancerDes = true;
		this->activeDe1 = true;
		this->activeDe2 = this->motor->getEtat()->getActiveDe2();
		this->activeCases = false;
		this->affichePorts = false;
		this->afficheBat = true;
	}
}

void Facade::lancerDes(){
	cout<<"Avant"<<endl;
	this->motor->execute();
	cout<<"Apres"<<endl;
	this->message = this->motor->getEtat()->getMessage();
	delete[] this->infosBateaux;
	this->infosBateaux = this->motor->getPosBateaux();
	this->de1 = this->motor->getDe1();
	this->de2 = this->motor->getDe2();
	this->miseAJourCasesActives(this->motor->getEtat()->getCasesActives());
	
	if(this->motor->getEtat()->getEtat()==Moteur::LANCERDESDEPLACEMENT){
		this->motor->setEtat(Moteur::LANCERDESDEPLACEMENT);
		this->activeCases = false;
		this->activeLancerDes = true;
	}
	
	else if(this->motor->getEtat()->getEtat()==Moteur::NAVIGATION){
		this->motor->setEtat(Moteur::NAVIGATION);
		this->activeCases = true;
		this->activeDe1 = true;
		this->activeDe2 = this->motor->getEtat()->getActiveDe2();
		this->activeLancerDes = false;
	}
}

void Facade::miseAJourCasesActives(std::vector<int> caseActives){
	for(int i=0;i<this->motor->getPlateau().getLongueur()*this->motor->getPlateau().getLargeur();i++){
		this->casesActives[i] = caseActives.at(i);
	}
}

EXTERNC DLL Facade* Facade_New(){
	return new Facade();
}
EXTERNC DLL void Facade_Delete(Facade* f){
	delete f;
}