
#ifndef BOOK_HPP
#define BOOK_HPP

#include "../include/Midia.hpp"

class Book : public Midia {

	public: 

		 Book();

		 Book(std::string name, std::string author, std::string publisher, std::string isbn, std::string date);

		~Book();

		void setAuthor(std::string author);
		std::string getAuthor();

		void setPublisher(std::string publisher);
		std::string getPublisher();

		void setISBN(std::string isbn);
		std::string getISBN();

		void setDate(std::string date);
		std::string getDate();

		void Edit();

		friend std::ostream& operator<<(std::ostream& os, Book& o); 

	private:

		std::string Author;
		std::string Publisher;
		std::string ISBN;
		std::string Date;

};  

Book::Book() {

	std::cout << std::endl << "  Digite o nome ou titulo da Midia: ";
	std::getchar(); std::string name; std::getline(std::cin, name); this->setName(name);

	std::cout << "  Autor(a) de " << this->getName() << ": ";
	std::string author; std::getline(std::cin, author); this->setAuthor(author);

	std::cout << "  Editora de " << this->getName() << ": ";
	std::string publisher; std::getline(std::cin, publisher); this->setPublisher(publisher);

	std::cout << "  ISB: ";
	std::string isbn; std::getline(std::cin, isbn); this->setISBN(isbn);

	std::cout << "  Data de lancamento de " << this->getName() << ": ";
	std::string date; std::getline(std::cin, date); this->setDate(date);

	this->setType(1);

}

Book::Book(std::string name, std::string author, std::string publisher, std::string isbn, std::string date) {

	this->setName(name);
	this->setAuthor(author);
	this->setPublisher(publisher);
	this->setISBN(isbn);
	this->setDate(date);

	this->setType(1);

}

Book::~Book() {


}

void Book::setAuthor(std::string author) {

	Author = author;

}

std::string Book::getAuthor() {

	return Author;

} 


void Book::setPublisher(std::string publisher) {

	Publisher = publisher;

}

std::string Book::getPublisher() {

	return Publisher;

} 

void Book::setISBN(std::string isbn) {

	ISBN = isbn;

}

std::string Book::getISBN() {

	return ISBN;

}

void Book::setDate(std::string date) {

	Date = date;

}

std::string Book::getDate() {

	return Date;

} 

void Book::Edit() {

	std::cout << std::endl << "    Editando " << this->getName() << ":" << std::endl;

	std::cout << std::endl << "    Digite o novo nome ou titulo da Midia: ";
	std::string name; std::getline(std::cin, name); this->setName(name);

	std::cout << "    Autor(a) de " << this->getName() << ": ";
	std::string author; std::getline(std::cin, author); this->setAuthor(author);

	std::cout << "    Editora de " << this->getName() << ": ";
	std::string publisher; std::getline(std::cin, publisher); this->setPublisher(publisher);

	std::cout << "    ISB: ";
	std::string isbn; std::getline(std::cin, isbn); this->setISBN(isbn);

	std::cout << "    Data de lancamento de " << this->getName() << ": ";
	std::string date; std::getline(std::cin, date); this->setDate(date);

} 

std::ostream& operator<<(std::ostream& os, Book& o) {

    return os << o.getName() << " e um livro escrito por " 
    		  << o.getAuthor() << " lancado em " << o.getDate() << " pela editora " << o.getPublisher() 
    		  <<  " com codigo ISBN: " << o.getISBN() << ".";

}  

#endif