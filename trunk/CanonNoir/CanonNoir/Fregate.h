﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

#pragma once
#ifndef FREGATE_H
#define FREGATE_H
#include "Bateau.h"

class Fregate : public Bateau
{
	public :

		Fregate(bool tres, int posx, int posy, int posPortx, int posPorty);
		Fregate(const Bateau& bat);
		~Fregate();

}; 

#endif