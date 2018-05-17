
#ifndef DIGITAL_VIDEO_DISC_HPP
#define DIGITAL_VIDEO_DISC_HPP

#include "../include/Midia.hpp"

class Digital_Video_Disc : public Midia {

	public: 

		 Digital_Video_Disc();

		 Digital_Video_Disc(std::string name, std::string director, std::string date, float duration, std::string rating);
		
		~Digital_Video_Disc();

		void setDirector(std::string director);
		std::string getDirector();

		void setDate(std::string date);
		std::string getDate();

		void setDuration(float duration);
		float getDuration();

		void setRating(std::string rating);
		std::string getRating();

		void Edit();

		friend std::ostream& operator<<(std::ostream& os, Digital_Video_Disc& o); 

	private:

		std::string Director;
		std::string Date;
		float Duration;
		std::string Rating;

};  

Digital_Video_Disc::Digital_Video_Disc() {

	std::cout << std::endl << "  Digite o nome ou titulo da Midia: ";
	std::getchar(); std::string name; std::getline(std::cin, name); this->setName(name);

	std::cout << "  Diretor(a) de " << this->getName() << ": ";
	std::string director; std::getline(std::cin, director); this->setDirector(director);

	std::cout << "  Data de lancamento de " << this->getName() << ": ";
	std::string date; std::getline(std::cin, date); this->setDate(date);	

	std::cout << "  Duracao de " << this->getName() << " (em minutos): ";
	float duration; std::cin >> duration; std::getchar(); this->setDuration(duration);

	std::cout << "  Classificacao: ";
	std::string rating; std::getline(std::cin, rating); this->setRating(rating);

	this->setType(3);


}

Digital_Video_Disc::Digital_Video_Disc(std::string name, std::string director, std::string date, float duration, std::string rating) {

	this->setName(name);
	this->setDirector(director);
	this->setDate(date);	
	this->setDuration(duration);
	this->setRating(rating);

	this->setType(3);

}

Digital_Video_Disc::~Digital_Video_Disc() {


}

void Digital_Video_Disc::setDirector(std::string director) {

	Director = director;

}

std::string Digital_Video_Disc::getDirector() {

	return Director;

}

void Digital_Video_Disc::setDate(std::string date) {

	Date = date;

}

std::string Digital_Video_Disc::getDate() {

	return Date;

} 

void Digital_Video_Disc::setDuration(float duration) {

	Duration = duration;

}

float Digital_Video_Disc::getDuration() {

	return Duration;

}

void Digital_Video_Disc::setRating(std::string rating) {

	Rating = rating;

} 
  
std::string Digital_Video_Disc::getRating() {

	return Rating;

}

void Digital_Video_Disc::Edit() {

	std::cout << std::endl << "    Editando " << this->getName() << ":" << std::endl;

	std::cout << std::endl << "    Digite o novo nome ou titulo da Midia: ";
	std::string name; std::getline(std::cin, name); this->setName(name);
	
	std::cout << "    Diretor(a) de " << this->getName() << ": ";
	std::string director; std::getline(std::cin, director); this->setDirector(director);

	std::cout << "    Data de lancamento de " << this->getName() << ": ";
	std::string date; std::getline(std::cin, date); this->setDate(date);	

	std::cout << "    Duracao de " << this->getName() << " (em minutos): ";
	float duration; std::cin >> duration; std::getchar(); this->setDuration(duration);

	std::cout << "    Classificacao: ";
	std::string rating; std::getline(std::cin, rating); this->setRating(rating);

}

std::ostream& operator<<(std::ostream& os, Digital_Video_Disc& o) {

    	return os << o.getName() << " e um filme do(ou da) diretor(a) " << o.getDirector() 
    			  << " lancado em " << o.getDate() << " com duracao de " << o.getDuration() << " minutos e classificacao " << o.getRating() << ".";

}  

#endif