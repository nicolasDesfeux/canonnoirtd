﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

#pragma once
#include "Bateau.h"

class Fregate : public Bateau
{
	public :

		Fregate(bool tres, int posx, int posy, int posPortx, int posPorty);
		~Fregate();
		Bateau* degraderBateau();

}; 

