﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef RADEAU_H
#define RADEAU_H

#pragma once
#include "Bateau.h"

class Radeau : public Bateau
{
	public :
		Radeau();
		Radeau(int posx, int posy, int posPortx, int posPorty);
		Radeau(const Bateau& bat);
		~Radeau();
		int getNbDes() const;
		bool donneTresor();
};

inline int Radeau::getNbDes() const{
	return 1;
}

inline bool Radeau::donneTresor(){
	return false;
}

#endif