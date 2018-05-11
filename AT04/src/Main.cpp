
#include "../include/Main.hpp"

int main(int argc, char *argv[]) {

	Empresa IMD;

	unsigned short comando = 0;	while(comando != 6) {

		std::cout << std::endl << "  1: Adicionar Funcionarix;"
				  << std::endl << "  2: Remover Funcionarix;"
				  << std::endl << "  3: Reajustar Salario;"
				  << std::endl << "  4: Listar Funcionarixs;"
				  << std::endl << "  5: Listar Funcionarixs em treinamento;"
				  << std::endl << "  6: Sair;" << std::endl;

		std::cout << std::endl << "  Acao: "; std::cin >> comando;

		switch(comando) {

			case 1: {

				std::cout << std::endl << "  Adicionando Funcionarix:" << std::endl 
						  << std::endl << "    1: Operarix;"
					      << std::endl << "    2: Gerente;"
					      << std::endl << "    3: Secretarix;" << std::endl;

				unsigned short funcao = 0;

				std::cout << std::endl << "    Funcao: "; std::cin >> funcao;

				switch(funcao) {

					case 1: {

						IMD.Lista.Add(new Operarix);

					}

					break;

					case 2: {

						IMD.Lista.Add(new Gerente);

					}

					break;

					case 3: {

						IMD.Lista.Add(new Secretarix);

					}

					break;

					default: {

						std::cout << std::endl << "    Tipo nao reconhecido de funcionarix." << std::endl;

					}

					break;

				}


			}

			break;

			case 2: {

				std::cout << std::endl << "  Removendo Funcionarix:" << std::endl 
						  << std::endl <<  "    Forneca o indice do funcionarix: "; unsigned short index = 0;
				std::cin >> index; IMD.Lista.Remove(index);

			}
			
			break;

			case 3: {

				std::cout << std::endl << "  Reajustando Salario:" << std::endl
						  << std::endl << "  Forneca a taxa de reajuste: "; 

				float taxa; std::cin >> taxa;  

				std::cout << std::endl << "    1: Operarix;"
					      << std::endl << "    2: Gerente;"
					      << std::endl << "    3: Secretarix;"
					      << std::endl << "    4: Todas Funcoes;" << std::endl;

				std::cout << std::endl << "    Funcao: "; 

				unsigned short funcao; std::cin >> funcao;

				switch(funcao) {

					case 1: {

						IMD.Lista.Reajustar_Operarix(taxa);

					}

					break;

					case 2: {

						IMD.Lista.Reajustar_Gerente(taxa);

					}

					break;

					case 3: {

						IMD.Lista.Reajustar_Secretarix(taxa);

					}

					break;

					case 4: {

						IMD.Lista.Reajustar(taxa);

					}

					break;

					default: {

						std::cout << std::endl << "    Tipo nao reconhecido de funcionarix." << std::endl;

					}

					break;

				}

			}
			
			break;

			case 4: {

				std::cout << std::endl << "  Listando Funcionarixs: " << std::endl;
				IMD.Lista.Print();

			}
			
			break;

			case 5: {

				std::cout << std::endl << "  Listando Funcionarixs em treinamento: " << std::endl;
				IMD.Lista.Print_Treinamento();

			}
			
			break;

			case 6: {

				std::cout << std::endl << "  Faliu." << std::endl;

			}

			break;

			default: {

				std::cout << std::endl << "  Comando nao reconhecido." << std::endl;

			}
			
			break;


		}

	}

	return 0;

}