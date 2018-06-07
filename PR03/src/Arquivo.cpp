
/**
	
	@brief Código fonte das funções definidas em Arquivo.hpp;
	@file Arquivo.cpp
	@author Abmael Dantas
	@since 07/06/2018
	@date 07/06/2018

*/

#include "../include/Arquivo.hpp"

std::vector<Pista> readPistas() {

    std::vector<Pista> Pistas;

    std::ifstream File("pistas.txt");

    if(File.is_open()) {
        
        std::string Data[2];
        std::string Aux;     

        unsigned int i = 0;

        while (getline(File, Aux)) {

            if (i < 2) {

                Data[i] = Aux;
                i++;

            }

            if (i >= 2) {

                Pistas.push_back(Pista(Data[0], stoi(Data[1]))); i = 0;

            }

        }

    }

    File.close();
    return Pistas;

}

std::vector<Sapo> readSapos() {
    
    std::vector<Sapo> Sapos;

    std::ifstream File("sapos.txt");

    if(File.is_open()) {

        unsigned int i = 0;
        std::string Data[6];
        std::string Aux;

        while (getline(File, Aux)) {

            if (i < 6) {

                Data[i] = Aux;
                i++;

            }

            if (i >= 6) {

                Sapos.push_back(Sapo(stoi(Data[0]), Data[1], 0, 0, stoi(Data[2]), stoi(Data[3]), stoi(Data[4]), stoi(Data[5]), false)); i = 0;

            }

        }

    }

    File.close();
    return Sapos;

}


void writePistas(std::vector<Pista> Pistas) {

    std::ofstream File("pistas.txt", std::ofstream::out | std::ofstream::trunc);

    if(File.is_open()) {

        for (unsigned short i = 0; i < Pistas.size(); i++) {

            File << Pistas[i].getName() << std::endl;
            File << Pistas[i].getDist() << std::endl;

        }

    } 

    else {

        std::cout << std::endl << "    Nao foi possivel escrever o arquivo." << std::endl;

    }

    File.close();

}


void writeSapos(std::vector<Sapo> Sapos) {

    std::ofstream File("sapos.txt", std::ofstream::out | std::ofstream::trunc);

    if(File.is_open()) {

    	for (unsigned short i = 0; i < Sapos.size(); i++) {

            File << Sapos[i].getId() << std::endl;
            File << Sapos[i].getName() << std::endl;
            File << Sapos[i].getVictories() << std::endl;
            File << Sapos[i].getDraws() << std::endl;
            File << Sapos[i].getRaced() << std::endl;
            File << Sapos[i].getTotal_Jumps() << std::endl;

        }
        
    } 

    else {

        std::cout << "    Nao foi possivel escrever o arquivo" << std::endl;

    }

    File.close();
}