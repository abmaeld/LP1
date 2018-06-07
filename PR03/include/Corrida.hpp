
/**
	
	@brief Definição da classe Corrida e bibliotecas necessárias para suas funções;
	@file Corrida.hpp
	@author Abmael Dantas
	@since 07/06/2018
	@date 07/06/2018

*/

#ifndef CORRIDA_HPP
#define CORRIDA_HPP

#include <iostream>
#include <time.h>
#include <vector>
#include "../include/Sapo.hpp"
#include "../include/Pista.hpp"

class Corrida {

	public:

		/** 

			@brief Construtor de objeto da classe Corrida;
			@param None;
			@return None;

		*/

		~Corrida();

		/** 

			@brief Destrutor de objeto da classe Corrida;
			@param None;
			@return None;

		*/

		 Corrida();

		 /** 

			@brief Função para obter o estado da Corrida;
			@param None;
			@return bool Finished;

		*/

		void setCompetitor(Sapo* S);

		/** 

			@brief Função para definir a pista da Corrida;
			@param valor Pista* P;
			@return None;

		*/

		void setTrack(Pista* T);

		/** 

			@brief Função para obter a pista da Corrida;
			@param None;
			@return valor Pista*;

		*/

		Pista* getTrack();

		/** 

			@brief Função para mostrar os competidores da corrida;
			@param None;
			@return None;

		*/

		void Display_Competitors();

		/** 

			@brief Função para executar a corrida;
			@param None;
			@return None;

		*/

		void Run();

		/** 

			@brief Função para mostrar o rank da corrida;
			@param None;
			@return None;

		*/

		void Display_Rank();

		/** 

			@brief Função para dar as recompensas da corrida;
			@param None;
			@return None;

		*/

		void Reward();

	private:

		Pista* Track;
		std::vector<Sapo*> Competitors;
		std::vector<Sapo*> Rank;
		bool Finished;

};

#endif