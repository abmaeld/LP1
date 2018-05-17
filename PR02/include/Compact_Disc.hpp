
#ifndef COMPACT_DISC_HPP
#define COMPACT_DISC_HPP

#include "../include/Midia.hpp"

class Compact_Disc : public Midia {

	public: 

		 Compact_Disc();

		 Compact_Disc(std::string name, std::string artist, std::string date, std::string recording_company, unsigned short tracks);

		~Compact_Disc();

		void setArtist(std::string artist);
		std::string getArtist();

		void setDate(std::string date);
		std::string getDate();

		void setRecording_Company(std::string recording_company);
		std::string getRecording_Company();

		void setTracks(unsigned short tracks);
		unsigned short getTracks();

		void Edit();

		friend std::ostream& operator<<(std::ostream& os, Compact_Disc& o); 

	private:

		std::string Artist;
		std::string Date;
		std::string Recording_Company;
		unsigned short Tracks;

};  

Compact_Disc::Compact_Disc() {

	std::cout << std::endl << "  Digite o nome ou titulo da Midia: ";
	std::getchar(); std::string name; std::getline(std::cin, name); this->setName(name);

	std::cout << "  Artista de " << this->getName() << ": ";
	std::string artist; std::getline(std::cin, artist); this->setArtist(artist);

	std::cout << "  Data de lancamento de " << this->getName() << ": ";
	std::string date; std::getline(std::cin, date); this->setDate(date);	

	std::cout << "  Gravadora de " << this->getName() << ": ";
	std::string recording_company; std::getline(std::cin, recording_company); this->setRecording_Company(recording_company);

	std::cout << "  Numero de faixas: ";
	unsigned short tracks; std::cin >> tracks; this->setTracks(tracks);

	this->setType(2);

}

Compact_Disc::Compact_Disc(std::string name, std::string artist, std::string date, std::string recording_company, unsigned short tracks) {

	this->setName(name);
	this->setArtist(artist);
	this->setDate(date);	
	this->setRecording_Company(recording_company);
	this->setTracks(tracks);

	this->setType(2);

}

Compact_Disc::~Compact_Disc() {

	
}

void Compact_Disc::setArtist(std::string artist) {

	Artist = artist;

}

std::string Compact_Disc::getArtist() {

	return Artist;

}

void Compact_Disc::setDate(std::string date) {

	Date = date;

}

std::string Compact_Disc::getDate() {

	return Date;

} 

void Compact_Disc::setRecording_Company(std::string recording_company) {

	Recording_Company = recording_company;

}

std::string Compact_Disc::getRecording_Company() {

	return Recording_Company;

}

void Compact_Disc::setTracks(unsigned short tracks) {

	Tracks = tracks;

} 
  
unsigned short Compact_Disc::getTracks() {

	return Tracks;

}

void Compact_Disc::Edit() {

	std::cout << std::endl << "    Editando " << this->getName() << ":" << std::endl;

	std::cout << std::endl << "    Digite o novo nome ou titulo da Midia: ";
	std::string name; std::getline(std::cin, name); this->setName(name);

	std::cout << "    Artista de " << this->getName() << ": ";
	std::string artist; std::getline(std::cin, artist); this->setArtist(artist);

	std::cout << "    Data de lancamento de " << this->getName() << ": ";
	std::string date; std::getline(std::cin, date); this->setDate(date);	

	std::cout << "    Gravadora de " << this->getName() << ": ";
	std::string recording_company; std::getline(std::cin, recording_company); this->setRecording_Company(recording_company);

	std::cout << "    Numero de faixas: ";
	unsigned short tracks; std::cin >> tracks; this->setTracks(tracks);

}

std::ostream& operator<<(std::ostream& os, Compact_Disc& o) {

        return os << o.getName() << " e um CD do artista " << o.getArtist() 
        		  << " lancado em " << o.getDate() << " pela gravadora " << o.getRecording_Company() 
        		  << " com " << o.getTracks() << " faixas.";

}  

#endif