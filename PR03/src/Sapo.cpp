
/**
	
	@brief Código fonte das funções definidas para a classe Sapo;
	@file Sapo.cpp
	@author Abmael Dantas
	@since 17/03/2018
	@date 07/06/2018

*/

#include "../include/Sapo.hpp"
int Sapo::Sapos;

Sapo::Sapo(int id, std::string name, int pos, int jumps, int victories, int draws, int raced, int total_jumps, bool added) {

	Name = name;
	Id = id;
	Pos = pos;
	Jumps = jumps;
	Victories = victories;
	Draws = draws;
	Raced = raced;
	Total_Jumps = total_jumps;
	Added = added;

}

Sapo::Sapo() {

	std::cout << std::endl << "    Informe o nome do sapo: "; std::string name; std::getchar(); std::getline(std::cin, name); 

	Name = name;
	Id = ++Sapos;
	Pos = 0;
	Jumps = 0;
	Raced = 0;

}

// Destructor:

Sapo::~Sapo() {

	//Sapos--;

}

// Getters:

bool Sapo::getAdded() {

	return Added;

}
		
void Sapo::setAdded(bool A) {

	Added = A;

}

std::string Sapo::getName() {

	return Name;

}

int Sapo::getId() {

	return Id;

}

int Sapo::getPos() {

	return Pos;

}

int Sapo::getJumps() {

	return Jumps;

}

int Sapo::getVictories() {

	return Victories;

}

int Sapo::getDraws() {

	return Draws;

}

int Sapo::getTotal_Jumps() {

	return Total_Jumps;

}

// Setters:

void Sapo::setRaced(int R) {

	Raced = R;

}

int Sapo::getRaced() {

	return Raced;

}

void Sapo::setName(std::string N) {

	Name = N;

}

void Sapo::setPos(int P) {

	Pos = P;
}


void Sapo::setJumps(int J) {

	Jumps = J;

}

void Sapo::setVictories(int V) {

	Victories = V;

}

void Sapo::setDraws(int D) {

	Draws = D;

}


// Functions:

int Sapo::Jump() {

	int Jump = 1 + (rand()% 10);
	Pos += Jump;
	Jumps++;
	Total_Jumps++;

	return Jump;

}