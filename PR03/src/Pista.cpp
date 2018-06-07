
/**
	
	@brief Código fonte das funções definidas em Pista.hpp;
	@file Pista.cpp
	@author Abmael Dantas
	@since 07/06/2018
	@date 07/06/2018

*/

#include "../include/Pista.hpp"

Pista::Pista(std::string name, int dist) {

	Name = name;
	Dist = dist;

}

Pista::Pista() {

	std::cout << std::endl << "    Informe o nome da pista: "; std::string name; std::getchar(); std::getline(std::cin, name);
	std::cout << std::endl << "    Informe o tamanho da pista (em metros): "; int dist; std::cin >> dist;

	Name = name;
	Dist = dist;

}

Pista::~Pista() {


}

// Getters:

std::string Pista::getName() {

	return Name;

}

int Pista::getDist() {

	return Dist;

}

// Setters:


void Pista::setName(std::string N) {

	Name = N;

}


void Pista::setDist(int D) {

	Dist = D;

}