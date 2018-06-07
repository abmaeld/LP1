
/**
	
	@brief Bibliotecas necessárias para as funções da main de stream de arquivo;
	@file Arquivo.hpp
	@author Abmael Dantas
	@since 07/06/2018
	@date 07/06/2018

*/

#ifndef ARQUIVO_HPP
#define ARQUIVO_HPP

#include <fstream>
#include <vector>
#include <string>
#include "../include/Sapo.hpp"
#include "../include/Pista.hpp"

std::vector<Pista> readPistas();
void writePistas(std::vector<Pista> Pistas);

std::vector<Sapo> readSapos();
void writeSapos(std::vector<Sapo> Sapos); 

#endif