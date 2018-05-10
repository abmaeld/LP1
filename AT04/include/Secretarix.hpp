
#ifndef SECRETARIX_HPP
#define SECRETARIX_HPP

#include "../include/Funcionarix.hpp"

class Secretarix : public Funcionarix {

	public: 

		 Secretarix();
		~Secretarix();

		void setRamal(unsigned short ramal);
		unsigned short getRamal();

		friend std::ostream& operator<<(std::ostream& os, Secretarix& o); 

	private:

		unsigned short Ramal;

};  

Secretarix::Secretarix() {

	std::cout << "  Informe o ramal de contato de " << this->getName() << ": ";
	unsigned short ramal; std::cin >> ramal; this->setRamal(ramal);

	this->setFunction(3); 

}

Secretarix::~Secretarix() {


}

void Secretarix::setRamal(unsigned short ramal) {

	Ramal = ramal;

}

unsigned short Secretarix::getRamal() {

	return Ramal;

}     

std::ostream& operator<<(std::ostream& os, Secretarix& o) {

            return os << o.getName() << " : o salario de " 
              << o.getName() << " vale " << o.getSalary() 
              << " | trabalhou por " << o.getYears_Worked() << " anos, " 
              << o.getMonths_Worked() << " meses e " 
              << o.getDays_Worked() << " dias como secretarix. | Ramal " << o.getRamal();

}  

#endif