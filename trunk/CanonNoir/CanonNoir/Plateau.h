﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "Case.h"
#include "Etat.h"

class Plateau
{
	private :
		int longueur;
		int largeur;
		Case tab_case[11][8]; 
	
	public :
		Plateau(int lo,int la);
		inline virtual int getLargeur(){return this->largeur;}
		inline virtual int getLongueur(){return this->longueur;}
		Case getCase(int x, int y){return tab_case[x][y];}
		void libereCase(int x,int y);
		Etat getEtat(int x,int y);
		bool estNavigable(int x,int y);

}; 

