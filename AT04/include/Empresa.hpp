
#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include <iostream>
#include <string>
#include "../include/List.hpp"

class Empresa {

	public: 

		 Empresa();
		~Empresa();

		void setName(std::string name);
		std::string getName();

		void setCNPJ(std::string cnpj);
		std::string getCNPJ();



		List<Funcionarix> Lista;

		friend std::ostream& operator<<(std::ostream& os, Empresa& o); 

	private:

		std::string Name;
		std::string CNPJ;

};  

Empresa::Empresa() {

	std::cout << std::endl << "  Digite o nome da empresa: ";
	std::string name; std::getline(std::cin, name); this->setName(name);

	std::cout << "  Digite o cnpj da empresa: ";
	std::string cnpj; std::getline(std::cin, cnpj); this->setCNPJ(cnpj);

}

Empresa::~Empresa() {


}

void Empresa::setName(std::string name) {

	Name = name;

}

std::string Empresa::getName() {

	return Name;

}

void Empresa::setCNPJ(std::string cnpj) {

	CNPJ = cnpj;

}

std::string Empresa::getCNPJ() {

	return CNPJ;
	
}


std::ostream& operator<<(std::ostream& os, Empresa& o) {

    return os << o.getName() << " tem " << o.Lista.getSize() << " funcionarios." << std::endl;

}  

#endif