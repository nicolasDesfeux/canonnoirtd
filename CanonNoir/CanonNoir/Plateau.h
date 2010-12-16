﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

#ifndef PLATEAU_H
#define PLATEAU_H

#pragma once
#include "Case.h"
#include <vector>

class Plateau
{
	private :
		static const int longueur = 11;
		static const int largeur = 8;
		Case tab_case [11][8];
		
	public :
		Plateau();
		int getLargeur() const;
		int getLongueur() const;
		Case getCase(int x, int y) const;
		void libereCase(int x,int y);
		int getEtat(int x,int y) const;
		bool estNavigable(int x,int y) const;

}; 

inline int Plateau::getLargeur() const{
	return this->largeur;
}

inline int Plateau::getLongueur() const{
	return this->longueur;
}

#endif