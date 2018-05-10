
#ifndef OPERARIX_HPP
#define OPERARIX_HPP

#include "../include/Funcionarix.hpp"

class Operarix : public Funcionarix {

	public: 

		 Operarix();
		~Operarix();

		void setEmpresa(std::string empresa);
		std::string getEmpresa();

		friend std::ostream& operator<<(std::ostream& os, Operarix& o); 

	private:

		std::string Empresa;

};  

Operarix::Operarix() {

	std::cout << "  Digite o nome da empresa em que " << this->getName() << " trabalha: ";
	std::getchar(); std::string empresa; std::getline(std::cin, empresa); this->setEmpresa(empresa);

	this->setFunction(1);

}

Operarix::~Operarix() {


}

void Operarix::setEmpresa(std::string empresa) {

	Empresa = empresa;

}

std::string Operarix::getEmpresa() {

	return Empresa;

} 

std::ostream& operator<<(std::ostream& os, Operarix& o) {

    return os << o.getName() << " : o salario de " 
              << o.getName() << " vale " << o.getSalary() 
              << " | trabalhou por " << o.getYears_Worked() << " anos, " 
              << o.getMonths_Worked() << " meses e " 
              << o.getDays_Worked() << " dias para " << o.getEmpresa() << " como um operarix.";

}  

#endif