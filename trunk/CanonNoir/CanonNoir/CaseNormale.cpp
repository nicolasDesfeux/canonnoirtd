//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "CaseNormale.h"
#include "Case.h"
#include"LancerDesDeplacement.h"



bool CaseNormale::estAuBord(){return false;} //On ne peut pas impl�menter cette m�thode, il faut la remonter dans PLateau.
		bool CaseNormale::getEstNavigable(){return this->estNavigable;}
		//Renvoie l'�tat dans lequel doit �tre le moteur apr�s cett case !
		Etat& CaseNormale::getEtat(){
			//Appeler le changement de joueur ?
			LancerDesDeplacement e = LancerDesDeplacement();
			return e;
		}

