
#include "../include/Batalha.hpp"

void Batalha::Retirar_Bencao(short i) {

	if (Monstros[i].getB() == 1) {

		Monstros[i].setF_F(Monstros[i].getF_F() - 1);
		Monstros[i].setB(0);

	}

	else if (Monstros[i].getB() == 2) {

		Monstros[i].setF_M(Monstros[i].getF_M() - 1);
		Monstros[i].setB(0);

	}

	else if (Monstros[i].getB() == 3) {

		Monstros[i].setD_F(Monstros[i].getD_F() - 1);
		Monstros[i].setB(0);

	}

	else if (Monstros[i].getB() == 4) {

		Monstros[i].setD_M(Monstros[i].getD_M() - 1);
		Monstros[i].setB(0);

	}

}

Batalha::Batalha() {

	srand(time(NULL));

	Monstros.push_back(Monstro());

	Monstros[0].Id = "Desafiante";

	Monstros.push_back(Monstro(100.0, 2.0, 1.0, 2.0, 0.0));

	Monstros[1].Id = "do Computador";

	Fim = false;

}

Batalha::~Batalha() {

	
}

void Batalha::Jogar_Turno() {

	if (!Fim) {

		if (Monstros[1].getVida() <= 0) {

			std::cout << std::endl << "O monstro " << Monstros[0].Id << " venceu." << std::endl;
			Vencedor = 0;
			Fim = true;

		}

		else if (Monstros[0].getVida() <= 0) {

			std::cout << std::endl << "O monstro " << Monstros[1].Id << " venceu." << std::endl;
			Vencedor = 1;
			Fim = true;

		}

		else {

			bool pass = false;

			while (!pass) {

				short cmd;

				std::cout << Monstros[0];

				std::cout << std::endl << "Tome sua acao: " << std::endl 
						  << std::endl << " 1: Ataque Fisico" 
						  << std::endl << " 2: Ataque Magico" 
						  << std::endl << " 3: Bencao" << std::endl;

				std::cout << std::endl << "Opcao: "; std::cin >> cmd;

				if (cmd == 1) {

					Monstros[0].Ataque_Fisico(Monstros[1]);
					Retirar_Bencao(0);

					pass = true;
					
				}

				else if (cmd == 2) {

					Monstros[0].Ataque_Magico(Monstros[1]);
					Retirar_Bencao(0);

					pass = true;

				}

				else if (cmd == 3) {

					Retirar_Bencao(0);

					std::cout << std::endl << "O que deseja aumentar?" << std::endl
							  << std::endl << " 1: Forca Fisica" 
							  << std::endl << " 2: Forca Magica" 
							  << std::endl << " 3: Defesa Fisica" 
							  << std::endl << " 4: Defesa Magica" << std::endl;


					short n; std::cout << std::endl << "Opcao: "; std::cin >> n;

					Monstros[0].Bencao(n);

					pass = true;

				}

				else {

					std::cout << std::endl << "Comando nao reconhecido." << std::endl;

				}

			}

			if (Monstros[1].getVida() > 0) {

				std::cout << Monstros[1];

				srand(time(NULL));

				short action = rand()%3;

				if (action == 1) {

					Monstros[1].Ataque_Fisico(Monstros[0]);
					Retirar_Bencao(1);

				}

				else if (action == 2) {

					Monstros[1].Ataque_Magico(Monstros[0]);
					Retirar_Bencao(1);

				}

				else {

					Retirar_Bencao(1);
					Monstros[1].Bencao(1+rand()%4);

				}

			}

		}

	}

}
