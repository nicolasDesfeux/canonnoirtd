﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

#ifndef CASE_H
#define CASE_H

#pragma once

class Case
{
	protected :
		int hauteur;
		bool estNavigable;

	public :

		Case():hauteur(0),estNavigable(false){};
		Case(int haut,bool nav);
		virtual bool getEstNavigable() const;
		virtual void setEstNavigable(bool b);
		virtual void libereCase();
		int getHauteur() const;
		virtual int getNbTresors() const;
		virtual void enleveUnTresor();
		virtual bool estPort() const;
		virtual int getEtat() const;
};

inline bool Case::getEstNavigable() const {
	return this->estNavigable;
}

inline void Case::setEstNavigable(bool b){
	this->estNavigable=b;
}

inline int Case::getHauteur() const{
	return this->hauteur;
}

inline int Case::getNbTresors() const{
	return 0;
}

inline bool Case::estPort() const{
	return false;
}

#endif