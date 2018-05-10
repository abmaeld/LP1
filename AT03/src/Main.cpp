
#include "../include/Main.hpp"

int main(int argc, char *argv[]) {

	List<Product> Lista;
	
	unsigned short int cmd = 0; while(cmd != 7) {

		std::cout << std::endl
		  << "  1: Adicionar produto a lista;" << std::endl
		  << "  2: Remover produto da lista;" << std::endl
		  << "  3: Procurar produto na lista;" << std::endl
		  << "  4: Obter informacoes de produto da lista;" << std::endl
		  << "  5: Imprimir lista;" << std::endl
		  << "  6: Procurar produto mais caro da lista;" << std::endl
		  << "  7: Sair do sistema." << std::endl;

		std::cout << std::endl << "  Acao: "; std::cin >> cmd;

		switch(cmd) {

			case 1: {

				std::cout << std::endl
				  << "  1: Smartphone;" << std::endl
				  << "  2: Laptop;" << std::endl
				  << "  3: Desktop;" << std::endl
				  << "  4: Comida;" << std::endl
				  << "  5: Lanche;" << std::endl
				  << "  6: Medicamento." << std::endl;

				std::cout << std::endl << "  Adicionar: "; std::getchar(); int Type; std::cin >> Type;

				switch(Type) {

					case 1:

						Lista.Add(new Smartphone);
						break;

					case 2:

						Lista.Add(new Laptop);
						break;

					case 3:

						Lista.Add(new Desktop);
						break;

					case 4:

						Lista.Add(new Food);
						break;

					case 5:

						Lista.Add(new Snack);
						break;

					case 6:

						Lista.Add(new Medicine);
						break;

					default:

						std::cout << std::endl << "  Tipo nao reconhecido." << std::endl;
						break;
				}

			}	

			break;

			case 2: {

				std::cout << std::endl << "  Remover produto (forneca o indice): ";
				int Index; std::cin >> Index; Lista.Remove(Index); 

				
			}

			break;

			case 3: {

				std::cout << std::endl << "  Procurar produto (forneca o codigo do produto): ";
				std::string Code; std::getchar(); std::getline(std::cin, Code); Lista.SearchFor(Code);

			}

			break;

			case 4: {

				std::cout << std::endl << "  Obter informacoes de produto da lista (forneca o indice): ";
				int Index; std::cin >> Index; Lista.getInfo(Index); 
				
			}

			break;

			case 5: {

				Lista.Print();

			}

			break;

			case 6: {

				Lista.Most_Expensive();

			}

			break;

			case 7: {

				std::cout << std::endl << "  The end has no end - The Strokes." << std::endl << std::endl;

			}

			break;

			default: {

				std::cout << std::endl << "  Opcao invalida." << std::endl;

			}

			break;

		}

	}

	return 0;

}