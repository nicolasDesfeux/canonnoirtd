﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef ETAT_H
#define ETAT_H

#pragma once

#include <string>
class Moteur;

class Etat
{
	public :
		virtual void execute();
		virtual void setMessage(std::string mes);
		virtual int* getPortsLibres() const;
		virtual std::string getMessage() const;
		virtual int getEtat() const;
		virtual int* getCasesActives() const;
		virtual bool getActiveDe2() const;
};

#endif