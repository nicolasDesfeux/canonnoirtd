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
		Caravelle();
		Caravelle(bool tres, int posx, int posy, int posPortx, int posPorty);
		Caravelle(const Bateau& bat);
		~Caravelle();
		int getNbDes() const;
};

inline int Caravelle::getNbDes() const{
	return 2;
}

#endif