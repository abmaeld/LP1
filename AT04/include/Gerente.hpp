
#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "../include/Funcionarix.hpp"

class Gerente : public Funcionarix {

	public: 

		 Gerente();
		~Gerente();

		void setSenha(std::string senha);
		std::string getSenha();

		void setFuncionarixs(unsigned short funcionarixs);
		unsigned short getFuncionarixs();

		friend std::ostream& operator<<(std::ostream& os, Gerente& o); 

	private:

		std::string Senha;
		unsigned short Funcionarixs;

};  

Gerente::Gerente() {

	std::cout << "  Digite a senha de " << this->getName()  << ": ";
	std::getchar(); std::string senha; std::getline(std::cin, senha); this->setSenha(senha);

	std::cout << "  Informe quantos funcionarix " << this->getName() << " gerencia: ";
	unsigned short funcionarixs; std::cin >> funcionarixs; this->setFuncionarixs(funcionarixs);

	this->setFunction(2);

}

Gerente::~Gerente() {


}

void Gerente::setSenha(std::string senha) {

	Senha = senha;

}

std::string Gerente::getSenha() {

	return Senha;

} 

void Gerente::setFuncionarixs(unsigned short funcionarixs) {

	Funcionarixs = funcionarixs;

}

unsigned short Gerente::getFuncionarixs() {

	return Funcionarixs;

}   

std::ostream& operator<<(std::ostream& os, Gerente& o) {

        return os << o.getName() << " : o salario de " 
              << o.getName() << " vale " << o.getSalary() 
              << " | trabalhou por " << o.getYears_Worked() << " anos, " 
              << o.getMonths_Worked() << " meses e " 
              << o.getDays_Worked() << " dias gerenciando " << o.getFuncionarixs() << " funcionarixs.";

}  

#endif