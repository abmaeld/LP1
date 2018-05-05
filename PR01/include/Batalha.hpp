
#ifndef BATALHA_HPP
#define BATALHA_HPP

#include <iostream>
#include <vector>
#include <time.h>

#include "../include/Monstro.hpp"

#endif

class Batalha {

	public:

		 Batalha();
		~Batalha();

		void Jogar_Turno();
		void Retirar_Bencao(short i);

		bool Fim;
		int  Vencedor;

	private: 

		std::vector<Monstro> Monstros;

};