﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef BATEAU_H
#define BATEAU_H
#pragma once
#include <utility>

class Bateau
{
	protected :

		int nbDes;
		bool tresorABord;
		std::pair<int,int> position;
		std::pair<int,int> positionPort;

	public :

		Bateau();
		Bateau(int nbDes, bool tres, int posx, int posy, int posPortx, int posPorty);
		virtual ~Bateau();
		void deplacer(int x, int y);
		virtual bool aTresorABord() const;
		virtual void enleveTresor();
		virtual void donneTresor();
		virtual int getNbDes() const;
		std::pair<int,int> getPosition() const;
		std::pair<int,int> getPositionPort() const;

}; 

inline bool Bateau::aTresorABord() const{
	return tresorABord;
}

inline void Bateau::enleveTresor(){
	tresorABord = false;
}

inline void Bateau::donneTresor(){
	tresorABord = true;
}

inline std::pair<int,int> Bateau::getPosition() const{
	return position;
}

inline std::pair<int,int> Bateau::getPositionPort() const{
	return positionPort;
}

inline void Bateau::deplacer(int x, int y){
	position.first = x; position.second = y;
}

#endif