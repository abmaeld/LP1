
/**
	
	@brief Código fonte das funções definidas para a classe Sapo;
	@file Sapo.cpp
	@author Abmael Dantas
	@since 17/03/2018
	@date 20/03/2018

*/

#include "Sapo.hpp"

// Constructor:

Sapo::Sapo() {

	setId(Sapos);
	setPos(0);
	setJumps(0);
	Sapos++;

}

// Destructor:

Sapo::~Sapo() {}

// Getters:

short Sapo::getId() {

	return Id;

}

short Sapo::getPos() {

	return Pos;

}

short Sapo::getJumps() {

	return Jumps;

}

// Setters:


void Sapo::setPos(short P) {

	Pos = P;
}


void Sapo::setId(short I) {

	Id = I;

}

void Sapo::setJumps(short J) {

	Jumps = J;
}

// Functions:

void Sapo::jump() {

	Pos += 1 + (rand()% 10);

	Jumps++;

}