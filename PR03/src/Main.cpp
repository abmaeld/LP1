
/**
	
	@brief Código fonte do programa: Sapo++;
	@file Main.cpp
	@author Abmael Dantas
	@since 17/03/2018
	@date 07/06/2018

*/

#include "../include/Main.hpp"

void Ver_Sapos() {

	std::cout << std::endl << std::endl << "    ------------------------------ <SAPOS> ------------------------------    " << std::endl;

	for (unsigned short i = 0; i < Sapos.size(); i++) {

		if (Sapos[i].getAdded() == false) {

			std::cout << std::endl << "        " << Sapos[i].getId() << " : " 
					  << Sapos[i].getName() << " (" << Sapos[i].getVictories() << " Vitorias / " << Sapos[i].getDraws() << " Empates / " 
					  << Sapos[i].getRaced() << " Corridas / " << Sapos[i].getTotal_Jumps() << " Pulos)" << std::endl;

		}
	
	}

	std::cout << std::endl << "    ----------------------------- </SAPOS> ------------------------------    " << std::endl;

}

void Ver_Pistas() {

	std::cout << std::endl << std::endl << "    ------------------------------ <PISTAS> ------------------------------    " << std::endl;

	unsigned int index = 0;

	for (unsigned short i = 0; i < Pistas.size(); i++) {

		std::cout << std::endl << "        " << ++index << ": " << Pistas[i].getName() << " (" << Pistas[i].getDist() << " metros);" << std::endl;

	}

	std::cout << std::endl  << "    ----------------------------- </PISTAS> ------------------------------    " << std::endl;

}

int main(int argc, char *argv[]) {

	//Init();

	unsigned short comando = 0;	while(comando != 6) {

		Pistas = readPistas();
		Sapos = readSapos();

		Menu();

		std::cin >> comando;

		switch(comando) {

			case 1: {

				Sapos.push_back(Sapo());
				writeSapos(Sapos);

			}

			break;

			case 2: {
				
				Pistas.push_back(Pista());
				writePistas(Pistas);

			}
			
			break;

			case 3: {

				Ver_Sapos();

			}
			
			break;

			case 4: {

				Ver_Pistas();

			}
			
			break;

			case 5: {

				Corrida Race;

				unsigned int index = 0;

				bool trackset = false; while (!trackset) { 

					Ver_Pistas();

					std::cout << std::endl << "    Qual pista deseja correr? "; std::cin >> index;

					if (index > 0 && index <= Pistas.size() + 1) {

						trackset = true;

					}

				}

				Race.setTrack(&Pistas[index-1]);

				std::cout << std::endl << "    Quais serao os competidores a correr? (1: Todos ou 2: Selecionar)" << std::endl; 

				//Ver_Sapos();

				std::cout << std::endl << "    Opcao: "; std::cin >> index;

				if (index == 1) {

					for (unsigned short i = 0; i < Sapos.size(); i++) {

						if (Sapos[i].getAdded() == false) {	

							Race.setCompetitor(&Sapos[i]);

						}

					}

				}

				else {

					unsigned int sap = 0, added = 0;

					bool competitorsset = false; while (!competitorsset && added < Sapos.size()) {

						Ver_Sapos();

						std::cout << std::endl << "    Qual sapo deseja adicionar a corrida? (0: Finalizar)" 
								  << std::endl << std::endl << "    Opcao: "; std::cin >> sap;

						if (sap == 0) {

							competitorsset = true;

						}

						else if (sap >= 1 && sap <= Sapos.size() + 1) {

							if (Sapos[sap-1].getAdded() == false) {
								
								Race.setCompetitor(&Sapos[sap-1]);
								added++;

							}

							else {

								std::cout << std::endl << "    Este sapo ja foi adicionado a corrida." << std::endl;

							}

						}	

					}

				}

				Clear();

				std::cout << std::endl << std::endl << "    Welcome to " << Race.getTrack()->getName() << "!" << std::endl;

				Race.Display_Competitors();

				Pre_Race();

				Race.Run();

				Pos_Race();

				writeSapos(Sapos);

			}
			
			break;

			case 6: {

				std::cout << std::endl << std::endl;

			}

			break;

			default: {

				std::cout << std::endl << "    Comando nao reconhecido." << std::endl;

			}
			
			break;

		}

	}

	return 0;

}
	

