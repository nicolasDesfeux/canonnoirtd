﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

#ifndef CASEPORT_H
#define CASEPORT_H

#pragma once
#include "Case.h"

class CasePort : public Case
{
	private :
		int couleur;

	public :
		CasePort();
		int getCouleur() const;
		bool getEstNavigable() const;
		int getEtat() const;

}; 

inline int CasePort::getCouleur() const{
	this->couleur;
}

//Penser à vérifier le score du joueur car s'il a 3 trésors dans ce port, Etat PartieGagnee !
inline int CasePort::getEtat() const{
	return LANCERDESDEPLACEMENT;
}

#endif