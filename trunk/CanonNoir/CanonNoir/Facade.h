﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

#define WANTDLLEXP

#ifdef WANTDLLEXP		//exportation dll 
		#define DLL  __declspec( dllexport ) 
		#define EXTERNC extern "C"
#else
		#define DLL		//standard
		#define EXTERNC 
		
#endif

#ifndef FACADE_H
#define FACADE_H

#pragma once
#include <vector>
#include <typeinfo>
#include "Moteur.h"

class DLL Facade
{
	private :
		Moteur* motor;

		bool affichePlateau;
		bool afficheCanon;
		std::string message;
		int* scoresBateaux;
		int nbBateaux;
		bool afficheAttenteNbJoueurs;
		bool afficheJeuNormal;
		bool activeDe1;
		bool activeDe2;
		bool activeCases;
		bool activeLancerDes;
		int de1;
		int de2;
		int* casesActives;

	public :
		Facade();
		~Facade();
		bool activerDes();
		bool activerCases();
		bool activerPorts();
		std::vector<Bateau> getBateaux();
		std::string getMessage(){return this->message;};
		int* getValeursDes();
		bool afficheCurseurAngle();
		bool afficheCurseurPuissance();
		std::vector<std::pair<int,int>> getRelief();
		bool afficheGagnant();
		bool activerBateaux();
		bool afficheTir();
		void init();
		int getNbJoueurs();
		bool getAttenteNbJoueurs();
		int* getScores();
		int getNbDes();
		int* getPortsLibres();
		bool afficheBateaux();
		bool afficheRelief();
		bool afficheScores();
		bool affichePortsLibres();
		void setAngle(int angle);
		void setPuissance(int puissance);
		void setCible(int nb);
		void setDeplacement(int x, int y);
		void setNbJoueurs(int nb);
		void setClick(int x,int y);
		void lancerDes();
		int getDes1(){return de1;};
		int getDes2(){return de2;};
};

EXTERNC DLL Facade* Facade_New();
EXTERNC DLL void Facade_Delete(Facade* f);
#endif