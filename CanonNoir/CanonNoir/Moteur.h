﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef MOTEUR_H
#define MOTEUR_H
#pragma once

#include <vector>
#include "Joueur.h"
#include "Plateau.h"
#include "Etat.h"
#include "De.h"

using namespace std;

class Moteur
{
	private :
		int nbJoueurs;
		vector<int> ordreJoueurs;
		int joueurCourant;
		pair<int,int> click;
		map<pair<int,int>,int> casesDeplacementBateau;
		pair<De,De> des;
		vector<Joueur> joueurs;
		Plateau plateau;
		Etat* etat;

	public :
		Moteur();
		~Moteur();
		void setNbJoueurs(int nb);
		void setEtat(int e);
		//void deplacerBateau(Bateau& b,int destx,int desty);
		void execute();
		int getNbJoueurs() const;
		pair<int,int> getClick() const;
		void setClick(int x,int y);
		int getJoueurCourant() const;
		vector<int> getOrdreJoueurs() const;
		void setJoueurCourant(int jc);
		Etat* getEtat() const;
		pair<De,De> getDes() const;
		Joueur& getJoueur(int nb);
		Plateau& getPlateau();
		map<pair<int,int>,int> getCasesDeplacementBateau() const;
		void addJoueur(int ind,int num,int nbBat,int nbPort1,int nbPort2=0);
		enum Etats { ATTENTENBJOUEURS=1,CHOISIRPORT=2,SETORDREJOUEURS=3,LANCERDESDEPLACEMENT=4,NAVIGATION=5,
			TIRCANONDUEL=6,TIRCANONUNIQUE=7,PARTIEGAGNEE=8 };
};

inline int Moteur::getNbJoueurs() const{
	return nbJoueurs;
}

inline pair<int,int> Moteur::getClick() const{
	return this->click;
}

inline int Moteur::getJoueurCourant() const{
	return joueurCourant;
}

inline vector<int> Moteur::getOrdreJoueurs() const{
	return this->ordreJoueurs;
}

inline void Moteur::setJoueurCourant(int jc){
	this->joueurCourant = jc;
}

inline Etat* Moteur::getEtat() const{
	return this->etat;
}

inline pair<De,De> Moteur::getDes() const{
	return this->des;
}

inline Plateau& Moteur::getPlateau(){
	return this->plateau;
}

inline Joueur& Moteur::getJoueur(int nb){
	return this->joueurs.at(nb-1);
}

inline map<pair<int,int>,int> Moteur::getCasesDeplacementBateau() const{
	return this->casesDeplacementBateau;
}

#endif