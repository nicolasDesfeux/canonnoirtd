﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

#pragma once

#include <vector>
#include "Etat.h"

class TirCanon : public Etat
{
	private :

		int angle;
		int puissance;
		int joueurAttaquant;
		int joueurAttaque;
		bool tirReussi;
		std::pair<int,int> positionAttaquant;
		std::pair<int,int> positionAttaque;

	protected :
		std::string message;
		Moteur* moteur;

	public :
		TirCanon();
		TirCanon(std::string mess,Moteur* mot);
		void execute();
		void setAngle(int ang);
		void setPuissance(int puis);
		void setCible(int num);
		void faireTir();
		bool getTirReussi();
		void effectuerChangements();
		int* calculerRelief();
		bool tirFini();
		std::vector<std::pair<int,int>> calculerTir();

}; 

