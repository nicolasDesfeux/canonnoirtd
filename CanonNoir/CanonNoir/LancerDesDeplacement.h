﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef LANCERDESDEPLACEMENT_H
#define LANCERDESDEPLACEMENT_H
#pragma once

#include "LancerDes.h"
#include <set>

class LancerDesDeplacement : public LancerDes
{
	private :
		std::set<std::pair<int,int>> casesDeplacement;
		int etatsuivant;
		bool activeDe2;
	public :
		LancerDesDeplacement();
		LancerDesDeplacement(Moteur* mot);
		virtual void execute();
		int getEtat() const;
		int* getCasesActives() const;
		bool getActiveDe2() const;
		void calculCasesDeplacement(int de1,int de2);
		std::set<std::pair<int,int>> calculCasesDeplacementRec(const std::pair<int,int> caseDepart,const std::set<std::pair<int,int>> casesChemin);
		static double distCases(const std::pair<int,int>& case1,const std::pair<int,int>& case2);
		std::set<std::pair<int,int>> casesAutour(const std::pair<int,int>& case1);
		void setCasesDeplacementBateau(std::set<std::pair<int,int>> cases,int value);
};

inline bool LancerDesDeplacement::getActiveDe2() const{
	return this->activeDe2;
}

#endif