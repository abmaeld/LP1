
#include "../include/Main.hpp"

int main(int argc, char *argv[]) {

	bool Novo_Jogo = true; int Jogados, Desafiante, Computador;

	while (Novo_Jogo) {

		Batalha Jogo;

		while(!Jogo.Fim) {

			Jogo.Jogar_Turno();

		}

		Jogados++;

		if (Jogo.Vencedor == 0) {

			Desafiante++;

		}

		else if (Jogo.Vencedor == 1){

			Computador++;
			
		}

		char c; std::cout << std::endl << "Novo jogo? S/N: "; std::cin >> c;

		if (c == 'n' || c == 'N') {

			Novo_Jogo = false;

		} 

	}

	std::cout << std::endl << Jogados << " batalhas foram jogadas:" << std::endl 
			  << std::endl << "Vitorias do Desafiante: " << Desafiante 
			  << std::endl << "Vitorias do Computador: " << Computador << std::endl << std::endl;

	return 0;

}
