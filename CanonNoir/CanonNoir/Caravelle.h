﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef CARAVELLE_H
#define CARAVELLE_H
#pragma once
#include "Bateau.h"

class Caravelle : public Bateau
{
	public :
		Caravelle() : Bateau(){};
		Caravelle(bool tres, int posx, int posy, int posPortx, int posPorty) : 
			Bateau(2,tres,posx,posy,posPortx,posPorty){};
		Caravelle(const Bateau* bat);
		virtual ~Caravelle();
		virtual int getType() const;
};

#endif