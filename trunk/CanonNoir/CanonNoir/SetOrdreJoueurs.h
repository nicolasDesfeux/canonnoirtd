﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef SETORDREJOUEURS_H
#define SETORDREJOUEURS_H
#pragma once

#include "LancerDes.h"
#include "Moteur.h"
#include <map>

class SetOrdreJoueurs : public LancerDes
{
	private :
		std::map<int,int> scoreDesJoueurs;
		int etatsuivant;

	public :
		SetOrdreJoueurs() : LancerDes(NULL),etatsuivant(0){};
		SetOrdreJoueurs(Moteur* mot) : LancerDes(mot),etatsuivant(Moteur::SETORDREJOUEURS){};
		void setOrdreJoueurs(int j);
		virtual void execute();
		int getEtat() const;
};

inline int SetOrdreJoueurs::getEtat() const{
	return this->etatsuivant;
}

#endif