
/**
	
	@brief Definição da classe Sapo e bibliotecas necessárias para suas funções;
	@file Sapo.hpp
	@author Abmael Dantas
	@since 17/03/2018
	@date 20/03/2018

*/

#include <iostream>
#include <time.h>

class Sapo {

	public:

		/** 

			@brief Construtor de objeto da classe Sapo;
			@param None;
			@return None;

		*/

		~Sapo();

		/** 

			@brief Destrutor de objeto da classe Sapo;
			@param None;
			@return None;

		*/

		 Sapo();


		 /** 

			@brief Função para obter id do objeto da classe Sapo;
			@param None;
			@return Id do objeto (short);

		*/

		short getId();

		/** 

			@brief Função para obter a posição do objeto da classe Sapo;
			@param None;
			@return Pos do objeto (short);

		*/

		short getPos();

		/** 

			@brief Função para obter o número de pulos do objeto da classe Sapo;
			@param None;
			@return Jumps do objeto (short);

		*/

		short getJumps();

		/** 

			@brief Função para definir id do objeto da classe Sapo;
			@param valor short I;
			@return None;

		*/

		void setId(short I);

		/** 

			@brief Função para definir a posição do objeto da classe Sapo;
			@param valor short P;
			@return None;

		*/

		void setPos(short P);


		/** 

			@brief Função para definir o número de pulos do objeto da classe Sapo;
			@param valor short J;
			@return None;

		*/

		void setJumps(short J);

		/** 

			@brief Função para executar um pulo objeto da classe Sapo;
			@param None;
			@return None;

		*/

		void jump();

		static short Sapos;
		static int Dist;

	private:

		short Id;
		short Pos;
		short Jumps;

};
