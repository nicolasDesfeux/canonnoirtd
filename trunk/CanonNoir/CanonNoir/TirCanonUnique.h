﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef TIRCANONUNIQUE_H
#define TIRCANONUNIQUE_H
#pragma once

#include "TirCanon.h"

class TirCanonUnique : public TirCanon
{
	private :

	public :
		TirCanonUnique();
		TirCanonUnique(Moteur* mot);
		void setCible(int num);
		void execute();
}; 

inline void TirCanon::setCible(int num){
	this->bateauAttaque = num;
}

#endif