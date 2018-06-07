
/**
	
	@brief Definição da classe Sapo e bibliotecas necessárias para suas funções;
	@file Sapo.hpp
	@author Abmael Dantas
	@since 17/03/2018
	@date 07/06/2018

*/

#ifndef SAPO_HPP
#define SAPO_HPP

#include <iostream>
#include <time.h>
#include <string>

class Sapo {

	public:

		/** 

			@brief Construtores de objeto da classe Sapo;
			@param None / All attributes;
			@return None;

		*/

		 Sapo();

		 Sapo(int id, std::string name, int pos, int jumps, int victories, int draws, int raced, int total_jumps, bool added);

		/** 

			@brief Destrutor de objeto da classe Sapo;
			@param None;
			@return None;

		*/

		~Sapo();

		 /** 

			@brief Função para obter o nome do objeto da classe Sapo;
			@param None;
			@return Name do objeto (string);

		*/

		std::string getName();

		 /** 

			@brief Função para obter id do objeto da classe Sapo;
			@param None;
			@return Id do objeto (int);

		*/

		int getId();

		/** 

			@brief Função para obter a posição do objeto da classe Sapo;
			@param None;
			@return Pos do objeto (int);

		*/

		int getPos();

		/** 

			@brief Função para obter o número de pulos do objeto da classe Sapo;
			@param None;
			@return Jumps do objeto (int);

		*/

		int getJumps();

		/** 

			@brief Função para obter o número de vitorias do objeto da classe Sapo;
			@param None;
			@return Victories do objeto (int);

		*/

		int getVictories();

		/** 

			@brief Função para obter o número de empates do objeto da classe Sapo;
			@param None;
			@return Draws do objeto (int);

		*/

		int getDraws();

		/** 

			@brief Função para obter o número total de pulos do objeto da classe Sapo;
			@param None;
			@return Total_Jumps do objeto (int);

		*/

		int getTotal_Jumps();
		
		/** 

			@brief Função para definir o nome do objeto da classe Sapo;
			@param valor string N;
			@return None;

		*/

		void setName(std::string N);

		/** 

			@brief Função para definir a posição do objeto da classe Sapo;
			@param valor int P;
			@return None;

		*/

		void setPos(int P);

		/** 

			@brief Função para definir o número de pulos do objeto da classe Sapo;
			@param valor int J;
			@return None;

		*/

		void setJumps(int J);

		/** 

			@brief Função para definir o número de vitorias do objeto da classe Sapo;
			@param valor int V;
			@return None;

		*/

		void setVictories(int V);

		/** 

			@brief Função para definir o número de empates do objeto da classe Sapo;
			@param valor int D;
			@return None;

		*/

		void setDraws(int D);

		/** 

			@brief Função para executar um pulo objeto da classe Sapo;
			@param None;
			@return None;

		*/

		int Jump();

		/** 

			@brief Função para obter estado do objeto da classe Sapo;
			@param None;
			@return bool Added;

		*/

		bool getAdded();

		/** 

			@brief Função para definir o estado do objeto da classe Sapo;
			@param valor bool A;
			@return None;

		*/

		void setAdded(bool A);

		/** 

			@brief Função para definir o numero de corridas feitas do objeto da classe Sapo;
			@param valor int R;
			@return None;

		*/

		void setRaced(int R);

		/** 

			@brief Função para obter o numero de corridas feitas do objeto da classe Sapo;
			@param None;
			@return valor int Raced;

		*/

		int getRaced();

		static int Sapos;

	private:
		
		int Id;
		std::string Name;
		int Pos;
		int Jumps;
		int Victories;
		int Draws;
		int Raced;
		int Total_Jumps;
		bool Added;
		
};

#endif