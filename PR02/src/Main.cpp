
#include "../include/Main.hpp"

int main(int argc, char *argv[]) {

	List<Midia> Acervo;

	Book Crazy_Diamond = Book("Crazy Diamond", "Mike Watkinson e Peter Anderson", "Sonora", "978-85-66567-07-6", "2013");
	Book Assim_Falou_Zaratustra = Book("Assim Falou Zaratustra", "Friedrich Nietzsche", "Martin Claret", "978-85-7232-856-2", "2012");
	Compact_Disc Tranquility_Base_Hotel_Casino = Compact_Disc("Tranquility Base Hotel & Casino", "Arctic Monkeys", "2018", "Domino Records", 8);
	Compact_Disc Siamese_Dream = Compact_Disc("Siamese Dream", "The Smashing Pumpkins", "1993", "Virgin Records", 13);
	Digital_Video_Disc Die_Welle = Digital_Video_Disc("Die Welle", "Dennis Gansel", "2008", 107, "16 anos");
	Digital_Video_Disc Verdade_12528 = Digital_Video_Disc("Verdade 12.528", "Paula Sachetta e Peu Robles", "2012", 55, "livre");

	Acervo.Add(&Crazy_Diamond);
	Acervo.Add(&Assim_Falou_Zaratustra);
	Acervo.Add(&Tranquility_Base_Hotel_Casino);
	Acervo.Add(&Siamese_Dream);
	Acervo.Add(&Die_Welle);
	Acervo.Add(&Verdade_12528);

	unsigned short comando = 0;	while(comando != 6) {

		std::cout << std::endl << "  1: Adicionar Midia;"
				  << std::endl << "  2: Remover Midia;"
				  << std::endl << "  3: Editar Midia;"
				  << std::endl << "  4: Ver Acervo;"
				  << std::endl << "  5: Ver Estatisticas do Acervo;"
				  << std::endl << "  6: Sair;" << std::endl;

		std::cout << std::endl << "  Acao: "; std::cin >> comando;

		switch(comando) {

			case 1: {

				std::cout << std::endl << "  Adicionando Midia:" << std::endl 
						  << std::endl << "    1: Livro;"
					      << std::endl << "    2: Compact Disc (CD);"
					      << std::endl << "    3: Digital Video Disc (DVD);" << std::endl;

				unsigned short tipo;

				std::cout << std::endl << "    Tipo: "; std::cin >> tipo;

				switch(tipo) {

					case 1: {

						Acervo.Add(new Book);

					}

					break;

					case 2: {

						Acervo.Add(new Compact_Disc);

					}

					break;

					case 3: {

						Acervo.Add(new Digital_Video_Disc);

					}

					break;

					default: {

						std::cout << std::endl << "    Tipo de media desconhecido." << std::endl;

					}

					break;

				}

				std::string name; name = Acervo.getEnding()->getData_Address()->getName();

				if (Acervo.Search(name) != Acervo.getEnding()) {

					char opcao;

					std::cout << std::endl << "  Existe outra midia com este mesmo nome. Edite ou Remova a Midia adicionada." 
							  << std::endl << "  Editar (E) / Remover (Qualquer tecla): "; std::cin >> opcao;

					if (opcao == 'e' || opcao == 'E') {

						if (Acervo.getEnding()->getData_Address()->getType() == 1) {

							Book* Aux = (Book*) Acervo.getEnding()->getData_Address();

							Aux->Edit();
								
							Aux = nullptr;
							
						}

						else if (Acervo.getEnding()->getData_Address()->getType() == 2) {

							Compact_Disc* Aux = (Compact_Disc*) Acervo.getEnding()->getData_Address();

							Aux->Edit();
									
							Aux = nullptr;

						}

						else if (Acervo.getEnding()->getData_Address()->getType() == 3) {

							Digital_Video_Disc* Aux = (Digital_Video_Disc*) Acervo.getEnding()->getData_Address();

							Aux->Edit();
									
							Aux = nullptr;

						}

						else {

							// Invalid Type

						}

					}

					else {

						Acervo.Remove(Acervo.getSize());

					}

				}

			}

			break;

			case 2: {

				std::cout << std::endl << "  Removendo Midia:" << std::endl 
						  << std::endl <<  "    Forneca o nome ou titulo da midia: "; unsigned short index = 0;
				std::string name; std::getchar(); std::getline(std::cin, name); Acervo.Remover(name); 

			}
			
			break;

			case 3: {

				std::cout << std::endl << "  Editando Midia:" << std::endl
						  << std::endl << "    Forneca o titulo ou nome da midia: ";
				std::string name; std::getchar(); std::getline(std::cin, name); Acervo.Editar(name); 

	
			}
			
			break;

			case 4: {

				std::cout << std::endl << "  Acervo: " << std::endl;
				Acervo.Print();

			}
			
			break;

			case 5: {

				std::cout << std::endl << "  Estatisticas do Acervo: " << std::endl;
				Acervo.Print_Stats();

			}

			break;

			case 6: {

				std::cout << std::endl << "  Saiu." << std::endl;

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