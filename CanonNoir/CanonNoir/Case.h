﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

/// <remarks>typeCase renvoie le type de la case : Normale Port Canon Trésor</remarks>
#pragma once

#ifndef CASE_H
#define CASE_H

#include "Etat.h"

class Case
{
	protected :
		int hauteur;
		bool estNavigable;

	public :


	private :


	protected :


	public :

		virtual inline bool getEstNavigable() const {return estNavigable;}
		virtual inline void setEstNavigable(bool b){estNavigable=b;}
		virtual void libereCase();
		inline int getHauteur(){return this->hauteur;}
		Etat getEtat();

};
#endif