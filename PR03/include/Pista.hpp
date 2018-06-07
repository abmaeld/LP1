
/**
	
	@brief Definição da classe Pista e bibliotecas necessárias para suas funções;
	@file Pista.hpp
	@author Abmael Dantas
	@since 07/06/2018
	@date 07/06/2018

*/

#ifndef PISTA_HPP
#define PISTA_HPP

#include <iostream>
#include <string>
#include <time.h>

class Pista {

	public:

		/** 

			@brief Construtor de objeto da classe Pista;
			@param None / All attributes;
			@return None;

		*/

		Pista();

		Pista(std::string name, int dist);

		/** 

			@brief Destrutor de objeto da classe Pista;
			@param None;
			@return None;

		*/

		~Pista();

		 /** 

			@brief Função para obter o nome do objeto da classe Pista;
			@param None;
			@return Name do objeto (string);

		*/

		std::string getName();

		/** 

			@brief Função para obter a distancia do objeto da classe Pista;
			@param None;
			@return Dist do objeto (unsigned int);

		*/

		int getDist();

		/** 

			@brief Função para definir o nome do objeto da classe Pista;
			@param valor string N;
			@return None;

		*/

		void setName(std::string N);

		/** 

			@brief Função para definir a distancia do objeto da classe Pista;
			@param valor unsigned int D;
			@return None;

		*/

		void setDist(int D);

	private:

		std::string Name;
		int Dist;

};

#endif