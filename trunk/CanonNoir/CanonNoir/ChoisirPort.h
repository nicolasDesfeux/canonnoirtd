﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

#pragma once
#include "Etat.h"

class ChoisirPort : public Etat
{
	private :

		int* portsLibres;

	public :

		ChoisirPort();
		ChoisirPort(std::string mess,Moteur* mot);
		void execute();
		void setPortsLibres(int* pl);
		int* getPortsLibres();

}; 

inline int* ChoisirPort::getPortsLibres(){
	return this->portsLibres;
}

void ChoisirPort::setPortsLibres(int* pl){
	this->portsLibres = pl;
}