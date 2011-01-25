#include "Caravelle.h"

Caravelle::Caravelle(const Bateau* bat){
	this->nbDes = 2;
	this->tresorABord = false;
	this->position = std::make_pair(bat->getPosition().first,bat->getPosition().second);
	this->positionPort = std::make_pair(bat->getPositionPort().first,bat->getPositionPort().second);
}

Caravelle::~Caravelle(){
}


int Caravelle::getType() const{
	return 3;
}