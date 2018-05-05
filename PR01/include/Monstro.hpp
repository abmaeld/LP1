
#ifndef MONSTRO_HPP
#define MONSTRO_HPP

#include <iostream>
#include <time.h>
#include <string>

#endif

class Monstro {

	public:

		 Monstro();
		 Monstro(float V, float FF, float FM, float DF, float DM);
		~Monstro();

		float getVida();
		float getF_F();
		float getF_M();
		float getD_F();
		float getD_M();
		short getB();

		void setF_F(float FF);
		void setF_M(float FM);
		void setD_F(float DF);
		void setD_M(float DM);
		void setB(short nB);

		void Ataque_Fisico(Monstro &Alvo);
		void Ataque_Magico(Monstro &Alvo);
		void Bencao(short Atributo);

		friend std::ostream& operator << (std::ostream &o, Monstro &m);

		std::string Id;

	private: 

		float Vida;
		float F_F; // Força  Física;
		float F_M; // Força  Mágica;
		float D_F; // Defesa Física;
		float D_M; // Defesa Mágica;
		short B; // Bencao;

};