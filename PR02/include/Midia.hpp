
#ifndef MIDIA_HPP
#define MIDIA_HPP

#include <iostream>
#include <string>

class Midia {

	public: 

		 Midia();
		~Midia();

		void setName(std::string name);
		std::string getName();

		void setType(unsigned short type);
		unsigned short getType();

	private:

		std::string Name;
		unsigned short Type;

};  

Midia::Midia() {



}

Midia::~Midia() {



}

void Midia::setName(std::string name) {

	Name = name;

}

std::string Midia::getName() {

	return Name;

}

void Midia::setType(unsigned short type) {

	Type = type;

}

unsigned short Midia::getType() {

	return Type;
	
} 

#endif