//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "CaseTresor.h"
#include "Moteur.h"

CaseTresor::CaseTresor(){
	this->Case::Case();
}

CaseTresor::CaseTresor(int nbtres){
	this->Case::Case(0,true);
	this->nbTresors = nbtres;
}

int CaseTresor::getEtat() const{
	return Moteur::LANCERDESDEPLACEMENT;
}