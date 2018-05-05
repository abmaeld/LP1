
/**
	
	@brief Código fonte do programa: Sapo++;
	@file Main.cpp
	@author Abmael Dantas
	@since 17/03/2018
	@date 20/03/2018

*/

#include "Main.hpp"

int main(int argc, char *argv[]) {
	
	srand(time(NULL));

	Sapo Sap[10];

	Sapo::Dist = 100;

	bool finished = false; 

	while (finished == false) {

		for (unsigned short i = 0; i < Sapo::Sapos; i++) {

			Sap[i].jump();

			if (Sap[i].getPos() >= Sapo::Dist) {

				std::cout << std::endl << "Sapo " << Sap[i].getId() << " ganhou a corrida de " << 
						Sapo::Dist << " metros parando na posiçao " << Sap[i].getPos() << " com " << 
						Sap[i].getJumps() << " pulos." << std::endl << std::endl;
				
				finished = true;

			}

		}

	}

	// PODIUM
	
	return 0;

}
