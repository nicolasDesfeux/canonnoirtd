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
		int* scoresBateaux;
		int nbBateaux;
		bool afficheAttenteNbJoueurs;
		bool afficheJeuNormal;
		bool affichePorts;
		bool afficheBat;
		bool activeDe1;
		bool activeDe2;
		bool activeCases;
		bool activeLancerDes;
		int de1;
		int de2;
		int* casesActives;
		int* infosBateaux;

	public :
		std::string message;
		Facade();
		~Facade();
		bool activerDes(){return this->activeLancerDes;};
		int* getCasesActives(){return this->casesActives;};
		bool activerCases(){return this->activeCases;};
		bool activerPorts();
		std::string getMessage(){return this->message;};
		bool afficheCurseurAngle();
		bool afficheCurseurPuissance();
		std::vector<std::pair<int,int>> getRelief();
		bool afficheGagnant();
		bool activerBateaux();
		bool afficheTir();
		int getNbJoueurs(){return this->motor->nbJoueurs;};
		bool getAttenteNbJoueurs();
		int* getScores();
		int getNbDes();
		int* getPortsLibres();
		bool afficheBateaux(){return afficheBat;};
		bool afficheRelief();
		bool afficheScores();
		bool affichePortsLibres(){return affichePorts;};
		void setAngle(int angle);
		void setPuissance(int puissance);
		void setCible(int nb);
		void setDeplacement(int x, int y);
		void setNbJoueurs(int nb);
		void setClick(int x,int y);
		void lancerDes();
		int getDes1(){return de1;};
		int getDes2(){return de2;};
		int* getBateaux(){return this->infosBateaux;};
		void miseAJourCasesActives(std::vector<int> caseActives);
		void miseAJourInfosPorts(std::vector<int> infos);
};

EXTERNC DLL Facade* Facade_New();
EXTERNC DLL void Facade_Delete(Facade* f);
#endif