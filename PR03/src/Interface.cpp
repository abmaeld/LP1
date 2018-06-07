
#include "../include/Interface.hpp"

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)

std::string shellclearconsole = "cls\n";

#else

std::string shellclearconsole = "clear\n";

#endif

void Init() {

	std::cout << std::endl << std::endl << "    ------------------------------ <MENU> ------------------------------    " << std::endl;

}

void Menu() {

		std::cout << std::endl
				  << std::endl << "    1: Criar Sapo;"
				  << std::endl << "    2: Criar Pista;"
				  << std::endl << "    3: Ver estatisticas dos Sapos;"
				  << std::endl << "    4: Ver estatisticas das Pistas;"
				  << std::endl << "    5: Correr;"
				  << std::endl << "    6: Sair;" << std::endl;

		std::cout << std::endl << "    Acao: "; 

}

void Clear() {

	system(shellclearconsole.c_str());
	
}

void Pre_Race() {

	std::cout << std::endl << "    Para iniciar a corrida pressione qualquer tecla ..." << std::endl << std::endl; 
	std::getchar(); std::getchar();

}

void Pos_Race() {

	std::cout << std::endl << "    Para retornar ao menu pressione qualquer tecla ..." << std::endl << std::endl;
	std::getchar();
	Clear();
	//Init();

}


