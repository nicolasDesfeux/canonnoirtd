﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef NAVIGATION_H
#define NAVIGATION_H
#pragma once

#include "Case.h"
#include "Etat.h"
#include <vector>
#include <set>

class Navigation : public Etat
{
	private :
		std::set<std::pair<int,int>> casesBateauxCibles;
		int etatsuivant;
	protected :
		std::string message;
		Moteur* moteur;

	public :
		Navigation() : message(""),moteur(NULL){};
		Navigation(Moteur* mot) : message(""),moteur(mot){};
		void execute();
		void deplacer(int x, int y);
		int getEtat() const;
		std::vector<int> getCasesActives() const;
		void setCasesBateauxCibles();
		std::pair<int,int> getCaseFaceOppose(int x,int y) const;
		void setMessage(std::string mes);
		std::string getMessage() const;
}; 

inline int Navigation::getEtat() const{
	return etatsuivant;
}

inline void Navigation::setMessage(std::string mes){
	this->message = mes;
}

inline std::string Navigation::getMessage() const{
	return this->message;
}

#endif