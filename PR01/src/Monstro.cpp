
#include "../include/Monstro.hpp"

Monstro::Monstro() {

	Vida = 100;
	F_F = 1 + rand() % 3;
	F_M = 1 + rand() % 3;
	D_F = 1 + rand() % 3;
	D_M = 1 + rand() % 3;
	B = 0;

}

Monstro::Monstro(float V, float FF, float FM, float DF, float DM) {

	Vida = V;
	F_F = FF;
	F_M = FM;
	D_F = DF;
	D_M = DM;
	B = 0;

}

Monstro::~Monstro() {


}

float Monstro::getVida() {

	return Vida;

}

float Monstro::getF_F() {

	return F_F;

}
		
float Monstro::getF_M(){

	return F_M;
	
}
		
float Monstro::getD_F(){

	return D_F;
	
}
		
float Monstro::getD_M(){

	return D_M;
	
}

short Monstro::getB(){

	return B;

}

void Monstro::setF_F(float FF) {

	F_F = FF;

}
		
void Monstro::setF_M(float FM){

	F_M = FM;
	
}
		
void Monstro::setD_F(float DF){

	D_F = DF;
	
}
		
void Monstro::setD_M(float DM){

	D_M = DM;
	
}

void Monstro::setB(short nB) {

	B = nB;
 	
}

void Monstro::Ataque_Fisico(Monstro &Alvo) {

	float Dano = this->F_F - (Alvo.getD_F() / 2);

	if (Dano > 0) {

		Dano *= 10;

		Alvo.Vida -= Dano;

		std::cout << std::endl << "Monstro " << Id << " usou um ataque fisico em monstro " << Alvo.Id 
				  << " e deu " << Dano << " de dano." << std::endl;		

	}

	else {

			std::cout << std::endl << "Monstro " << Id << " usou um ataque magico em monstro " << Alvo.Id 
					  << ", mas nao foi efetivo." << std::endl; 
					  
		}

}

void Monstro::Ataque_Magico(Monstro &Alvo) {

	float Dano = this->F_M - (Alvo.getD_M() / 2);

	if (Dano > 0) {

		Dano *= 10;

		Alvo.Vida -= Dano;

		std::cout << std::endl << "Monstro " << Id << " usou um ataque magico em monstro " << Alvo.Id 
				  << " e deu " << Dano << " de dano." << std::endl; 

	}

	else {

		std::cout << std::endl << "Monstro " << Id << " usou um ataque magico em monstro " << Alvo.Id 
				  << ", mas nao foi efetivo." << std::endl; 

	}

}

void Monstro::Bencao(short Atributo) {

	if (Atributo == 1) {

		this->F_F = getF_F() + 1;

		std::cout << std::endl << "Monstro " << Id << " recebeu uma bencao no atributo de forca fisica por 1 turno." << std::endl; 

		this->B = 1;

	}

	else if (Atributo == 2) {

		this->F_M = getF_M() + 1;

		std::cout << std::endl << "Monstro " << Id << " recebeu uma bencao no atributo de forca magica por 1 turno." << std::endl; 

		this->B = 2;

	}

	else if (Atributo == 3) {

		this->D_F = getD_F() + 1;

		std::cout << std::endl << "Monstro " << Id << " recebeu uma bencao no atributo de defesa fisica por 1 turno." << std::endl; 

		this->B = 3;

	}

	else if (Atributo == 4) {

		this->D_M = getD_M() + 1;

		std::cout << std::endl << "Monstro " << Id << " recebeu uma bencao no atributo de defesa magica por 1 turno." << std::endl; 

		this->B = 4;

	}


}

std::ostream& operator<< (std::ostream &o, Monstro &m) {

	o << std::endl << "Monstro " << m.Id << ": " << std::endl << std::endl << "  Vida: " << m.Vida << " / 100" 
	  << std::endl << "  Forca Fisica: " << m.getF_F() 
	  << std::endl << "  Forca Magica: " << m.getF_M()
	  << std::endl << " Defesa Fisica: " << m.getD_F()
	  << std::endl << " Defesa Magica: " << m.getD_M()
	  << std::endl;

	return o;

}