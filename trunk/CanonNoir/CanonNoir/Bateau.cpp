//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <utility>
#include <string>

class Bateau
{
	private :

		int nbDes;
		bool tresorABord;
		pair<int,int> position;
		pair<int,int> positionPort;

	protected :


	public :


	private :


	protected :


	public :

		virtual void deplacer(int x, int y);
		virtual bool tresorABord();
		virtual void setBateau(int bat);
		virtual void enleveTresor();
		virtual void donneTresor();
		virtual pair<int,int> getPosition();
		virtual pair<int,int> getPositionPort();

}; 
