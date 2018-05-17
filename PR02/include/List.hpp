
#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>
#include <string>
#include "../include/Node.hpp"
#include "../include/Midia.hpp"
#include "../include/Book.hpp"
#include "../include/Compact_Disc.hpp"
#include "../include/Digital_Video_Disc.hpp"


template <class T> class List {

	public:

	     List();

	    ~List();

	    unsigned short getSize();

	    void Add(T* data_address);

	    void Add(T* data_address, unsigned short index);

	    void Remove(unsigned short index);

	    void Print();
		
		void Print_Stats();
	    
	    Node<T>* Search(std::string name);

	    Node<T>* getEnding();

	    void Editar(std::string name);

	    void Remover(std::string name);

	private:

		Node<T>* Beginning; Node<T>* Ending;
		unsigned short Size;

};

template <class T> List<T>::List() {

	Beginning = nullptr;
	Ending = nullptr;
	Size = 0;

}

template <class T> List<T>::~List() {

	Node<T>* Temp = Ending;

	while (Temp != Beginning) {

		Temp = Temp->getPrevious();
		Temp->setNext(nullptr);
		//delete Temp->getNext();

		Size--;

	}

	//delete Beginning;
	Beginning = nullptr;
	Ending = Beginning;

	Size--;

}

template <class T> unsigned short List<T>::getSize() {
	
	return Size;
	
}

template <class T> void List<T>::Add(T* data_address) {

	if (Ending == nullptr) {

	    Ending = new Node<T>;
	    
	    Ending->setPrevious(nullptr);
	    Ending->setData_Address(data_address);            
	    Ending->setNext(nullptr);
	    Beginning = Ending;

	}

	else {

	    Node<T>* Temp = new Node<T>;
	    
	    Temp->setPrevious(Ending);       
	    Temp->setData_Address(data_address);            
	    Temp->setNext(nullptr);
	    Ending->setNext(Temp);
	    Ending = Temp;
	 
	}
	
	Size++;

	//std::cout << std::endl << "  " << *data_address << " Added at Index " << Size << ';' << std::endl;
	 
}

template <class T> void List<T>::Add(T* data_address, unsigned short index) {

	if (index >= 1 && index <= Size + 1) {

		if (Ending == nullptr && index == 1) {

		    Ending = new Node<T>;
		    
		    Ending->setPrevious(nullptr);
		    Ending->setData_Address(data_address);            
		    Ending->setNext(nullptr);
		    Beginning = Ending;

		}

		else if (index == 1) {

		    Node<T>* Temp = new Node<T>;
		    
		    Temp->setPrevious(nullptr);
		    Temp->setData_Address(data_address);            
		    Temp->setNext(Beginning);
		    Beginning->setPrevious(Temp);
		    Beginning = Temp;
		 
		}

		else if (index == Size + 1) {

		    Node<T>* Temp = new Node<T>;
		    
		    Temp->setPrevious(Ending);
		    Temp->setData_Address(data_address);            
		    Temp->setNext(nullptr);
		    Ending->setNext(Temp);
		    Ending = Temp;
		 
		}

		else {
			
			Node<T>* Aux = Beginning;

			for (unsigned short i = 1; i < index; i++) {

				Aux = Aux->getNext();

			}

			Node<T>* Temp = new Node<T>;

			Temp->setPrevious(Aux->getPrevious());
		    Temp->setData_Address(data_address);            
		    Temp->setNext(Aux);
		    Aux->getPrevious()->setNext(Temp);
		    Aux->setPrevious(Temp);

		}

		Size++;

		//std::cout << std::endl << "  " << *data_address << " Added at Index " << index << ';' << std::endl;

	}

	else {

		std::cerr << std::endl << "  Invalid Index;" << std::endl;

	}
	 
}

template <class T> void List<T>::Remove(unsigned short index) {

	if (index >= 1 && index <= Size) {

		if (index == 1 && Size == 1) {

			//std::cout << std::endl << "  " << *(Beginning->getData_Address()) << " at Index " << index << " was Removed from List;" << std::endl;
			
			//delete Beginning;
			Beginning = nullptr;
			Ending = Beginning;
			Size--;

		}

		else if (index == 1) {

			Node<T>* Temp = Beginning;

			Beginning = Beginning->getNext();
			Beginning->setPrevious(nullptr);

			//std::cout << std::endl << "  " << *(Temp->getData_Address()) << " at Index " << index << " was Removed from List;" << std::endl;

			//delete Temp;
			Temp = nullptr;

			Size--;

		}

		else if (index == Size) {

			Node<T>* Temp = Ending;

			Ending = Ending->getPrevious();
			Ending->setNext(nullptr);

			//std::cout << std::endl << "  " << *(Temp->getData_Address()) << " at Index " << index << " was Removed from List;" << std::endl;

			//delete Temp;
			Temp = nullptr;

			Size--;

		}

		else {

			Node<T>* Temp = Beginning;

			for (unsigned short i = 1; i < index; i++) {

				Temp = Temp->getNext();

			}

			//std::cout << std::endl << "  " << *(Temp->getData_Address()) << " at Index " << index << " was Removed from List;" << std::endl;

			Temp->getPrevious()->setNext(Temp->getNext());
			Temp->getNext()->setPrevious(Temp->getPrevious());

			//delete Temp;
			Temp = nullptr;

			Size--;

		}

	}

	else {

		std::cerr << std::endl << "  Invalid Index;" << std::endl;

	}

}

template <class T> void List<T>::Print() {

	if (Ending != nullptr) {

		Node<T>* Temp = Beginning; int index = 0;

		while (Temp != nullptr) {

			std::cout << std::endl << "    " << ++index << ": ";

			if (Temp->getData_Address()->getType() == 1) {

				Book* Aux = (Book*) Temp->getData_Address();

				std::cout << *Aux << std::endl;
				
				Aux = nullptr;
			
			}

			else if (Temp->getData_Address()->getType() == 2) {

				Compact_Disc* Aux = (Compact_Disc*) Temp->getData_Address();

				std::cout << *Aux << std::endl;
				
				Aux = nullptr;

			}

			else if (Temp->getData_Address()->getType() == 3) {

				Digital_Video_Disc* Aux = (Digital_Video_Disc*) Temp->getData_Address();

				std::cout << *Aux << std::endl;
				
				Aux = nullptr;

			}

			else {

				// Invalid Type

			}

			Temp = Temp->getNext();

		}

	}

	else {

		std::cerr << std::endl << "    Empty List;" << std::endl;

	}

}

template <class T> void List<T>::Print_Stats() {

	if (Ending != nullptr) {

		Node<T>* Temp = Beginning; int Books = 0, Compact_Discs = 0, Digital_Video_Discs = 0;

		while (Temp != nullptr) {

			if (Temp->getData_Address()->getType() == 1) {

				Books++;

			}

			else if (Temp->getData_Address()->getType() == 2) {

				Compact_Discs++;

			}

			else if (Temp->getData_Address()->getType() == 3) {

				Digital_Video_Discs++;

			}

			else {

				// Invalid Type

			}

			Temp = Temp->getNext();

		}

		std::cout << std::endl << "    O acervo contem: " << Books 
				  << " livros, " << Compact_Discs << " discos e " << Digital_Video_Discs << " dvds." << std::endl;

	}

	else {

		std::cerr << std::endl << "    Empty List;" << std::endl;

	}

}


template <class T> Node<T>* List<T>::Search(std::string name) {

	if (Ending != nullptr) {

		Node<T>* Temp = Beginning; int index = 0;

		while (Temp != nullptr) {

			if (Temp->getData_Address()->getName() == name) {

				return Temp;
			
			}

			Temp = Temp->getNext();

		}

		return nullptr;

	}

	else {

		return nullptr;

	}

}

template <class T> Node<T>* List<T>::getEnding() {
	
	return Ending;

}

template <class T> void List<T>::Editar(std::string name) {

	Node<T>* Temp = this->Search(name);
	
	if (Temp != nullptr) {

		if (Temp->getData_Address()->getType() == 1) {

				Book* Aux = (Book*) Temp->getData_Address();

				Aux->Edit();
					
				Aux = nullptr;
				
		}

		else if (Temp->getData_Address()->getType() == 2) {

			Compact_Disc* Aux = (Compact_Disc*) Temp->getData_Address();

			Aux->Edit();
					
			Aux = nullptr;

		}

		else if (Temp->getData_Address()->getType() == 3) {

			Digital_Video_Disc* Aux = (Digital_Video_Disc*) Temp->getData_Address();

			Aux->Edit();
					
			Aux = nullptr;

		}

		else {

			// Invalid Type
			
		}

	}

	else {

		std::cerr << std::endl << "    There's no " << name << " in the List;" << std::endl;

	}

}

template <class T> void List<T>::Remover(std::string name) {

	if (Ending != nullptr) {

		Node<T>* Temp = Beginning; int index = 0;

		while (Temp != nullptr) {

			index++;

			if (Temp->getData_Address()->getName() == name) {

				this->Remove(index);
				return;
			
			}

			Temp = Temp->getNext();

		}

		std::cerr << std::endl << "    There's no " << name << " in the List;" << std::endl;

	}

	else {

		std::cerr << std::endl << "    Empty List;" << std::endl;

	}

}

#endif