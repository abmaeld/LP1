
/**
	
	@brief Código fonte das funções definidas em Corrida.hpp;
	@file Corrida.cpp
	@author Abmael Dantas
	@since 07/06/2018
	@date 07/06/2018

*/

#include "../include/Corrida.hpp"

Corrida::Corrida() {

	Track = nullptr;
	Finished = false;

}

Corrida::~Corrida() {


}

Pista* Corrida::getTrack() {

	return Track;

}

void Corrida::setCompetitor(Sapo* S) {

	Competitors.push_back(S);
	S->setAdded(true);

}

void Corrida::setTrack(Pista* T) {

	Track = T;
	
}

void Corrida::Display_Competitors() {

	std::cout << std::endl << std::endl << "    -------------------------- <COMPETITORS> --------------------------    " << std::endl;

	for (unsigned short i = 0; i < Competitors.size(); i++) {

		std::cout << std::endl << "                          " << Competitors[i]->getId() << " - " << Competitors[i]->getName() << std::endl;

	}

	std::cout << std::endl << "    ------------------------- </COMPETITORS> --------------------------    " << std::endl << std::endl;

}

void Corrida::Display_Rank() {

	int index = 0;

	std::cout << std::endl << std::endl << "    ------------------------------ <RANK> ------------------------------    " << std::endl;

	for (unsigned short i = 0; i < Rank.size(); i++) {

		std::cout << std::endl << "                      " << ++index << "º : " << Rank[i]->getName() 
		  		  << " (" << Rank[i]->getPos() << " metros com " << Rank[i]->getJumps() << " pulos)" << std::endl;

	}

	std::cout << std::endl << "    ------------------------------ </RANK> -----------------------------    " << std::endl << std::endl;

}

void Corrida::Reward() {

	short i = 1, counter = 0;

	while (Rank[i]->getJumps() == Rank[0]->getJumps() && Rank[i]->getPos() == Rank[0]->getPos()) {

		Rank[i]->setDraws(Rank[i]->getDraws()+1); i++; counter++;

	}

	if (counter == 0) {

		Rank[0]->setVictories(Rank[0]->getVictories()+1);

	}

	else {

		Rank[0]->setDraws(Rank[0]->getDraws()+1);

	}

}

void Corrida::Run() {

	if (Competitors.size() >= 2) {

		srand(time(NULL));

		std::cout << std::endl << std::endl << "    ---------------------------- <CORRIDA> ----------------------------    " << std::endl << std::endl;

		while (!Finished) {	

			for (unsigned short i = 0; i < Competitors.size(); i++) {

				if (Competitors[i]->getPos() < Track->getDist()) {

					short Jumped = Competitors[i]->Jump();

					std::cout << std::endl << "        " << Competitors[i]->getName() << " ("<< Competitors[i]->getId() << ") pulou " 
							  << Jumped << " metros parando na posiçao " << Competitors[i]->getPos() << " com "
							  << Competitors[i]->getJumps() << " pulos." << std::endl;

					if (Competitors[i]->getPos() >= Track->getDist()) {

						Rank.push_back(Competitors[i]);

					}

				}

				if (Rank.size() >= Competitors.size()) {

					Finished = true;

				}

			}

		}

		std::cout << std::endl << std::endl << "    ---------------------------- </CORRIDA> ----------------------------    " << std::endl;

		Display_Rank();
		Reward();

		for (unsigned short i = 0; i < Competitors.size(); i++) {

			Competitors[i]->setPos(0);
			Competitors[i]->setJumps(0);
			Competitors[i]->setAdded(false);
			Competitors[i]->setRaced(Competitors[i]->getRaced()+1);

		}

	}

	else {

		std::cout << std::endl << "    Voce nao pode ter uma corrida com menos de 2 jogadores." << std::endl << std::endl;

	}

}
