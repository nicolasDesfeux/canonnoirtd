//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "CasePort.h"
#include "LancerDesDeplacement.h"

bool CasePort::getEstNavigable(){
	return this->estNavigable; //Test si une case port est navigable.
			//V�rifier si un bateau peut aller sur un port qui n'a pas sa couleur.
}

Etat& CasePort::getEtat(){
			LancerDesDeplacement e = LancerDesDeplacement();
			return e;
		}

