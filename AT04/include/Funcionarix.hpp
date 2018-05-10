
#ifndef FUNCIONARIX_HPP
#define FUNCIONARIX_HPP

#include <iostream>
#include <string>

class Funcionarix {

	public: 

		 Funcionarix();
		~Funcionarix();

		void setName(std::string name);
		std::string getName();

		void setSalary(float salary);
		float getSalary();

		void setYears_Worked(unsigned short years_worked);
		unsigned short getYears_Worked();

		void setMonths_Worked(unsigned short months_worked);
		unsigned short getMonths_Worked();

		void setDays_Worked(unsigned short days_worked);
		unsigned short getDays_Worked();

		void setFunction(unsigned short function);
		unsigned short getFunction();

		//friend std::ostream& operator<<(std::ostream& os, Funcionarix& o); 

	private:

		std::string Name;
		float Salary;

		unsigned short Years_Worked;
		unsigned short Months_Worked;
		unsigned short Days_Worked;

		unsigned short Function;

};  

Funcionarix::Funcionarix() {

	std::cout << std::endl << "  Digite o nome do funcionarix: ";
	std::getchar(); std::string name; std::getline(std::cin, name); this->setName(name);

	std::cout << "  Informe o salario de " << this->getName() << ": ";
	float salary; std::getchar(); std::cin >> salary; this->setSalary(salary);

	std::cout << "  Informe quantos anos de servico tem " << this->getName() << ": ";
	unsigned short years_worked; std::cin >> years_worked; this->setYears_Worked(years_worked);

	std::cout << "  Informe quantos meses de servico tem " << this->getName() << ": ";
	unsigned short months_worked; std::cin >> months_worked; this->setMonths_Worked(months_worked);

	std::cout << "  Informe quantos dias de servico tem " << this->getName() << ": ";
	unsigned short days_worked; std::cin >> days_worked; this->setDays_Worked(days_worked);

}

Funcionarix::~Funcionarix() {



}

void Funcionarix::setName(std::string name) {

	Name = name;

}

std::string Funcionarix::getName() {

	return Name;

} 

void Funcionarix::setSalary(float salary) {

	Salary = salary;

}

float Funcionarix::getSalary() {

	return Salary;

}

void Funcionarix::setYears_Worked(unsigned short years_worked) {

	Years_Worked = years_worked;

}

unsigned short Funcionarix::getYears_Worked() {

	return Years_Worked;

} 

void Funcionarix::setMonths_Worked(unsigned short months_worked) {

	Months_Worked = months_worked;

}

unsigned short Funcionarix::getMonths_Worked() {

	return Months_Worked;

}

void Funcionarix::setDays_Worked(unsigned short days_worked) {

	Days_Worked = days_worked;

}

unsigned short Funcionarix::getDays_Worked() {

	return Days_Worked;

}  

void Funcionarix::setFunction(unsigned short function) {

	Function = function;

}

unsigned short Funcionarix::getFunction() {

	return Function;

} 

/* std::ostream& operator<<(std::ostream& os, Funcionarix& o) {

    return os << "";

} */

#endif