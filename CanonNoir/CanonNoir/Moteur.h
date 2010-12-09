﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

#ifndef MOTEUR_H
#define MOTEUR_H
#pragma once
#include "Joueur.h"
#include "Plateau.h"
#include "Etat.h"
#include "De.h"

class Moteur
{
	private :
		int nbJoueurs;
		int ordreJoueurs [4];
		int joueurCourant;
		De des [2];
		class Etat* etats [6];

	public :
		Moteur();
		~Moteur();
		void setNbJoueurs(int nb);
		void setEtat(Etat& e);
		void deplacerBateau(Bateau& b,int destx,int desty);
		void execute();
		int getNbJoueurs() const;
		int getJoueurCourant() const;
		void setJoueurCourant(int jc);

}; 

inline int Moteur::getNbJoueurs() const{
	return nbJoueurs;
}

inline int Moteur::getJoueurCourant() const{
	return joueurCourant;
}

inline void Moteur::setJoueurCourant(int jc){
	this->joueurCourant = jc;
}

#endif