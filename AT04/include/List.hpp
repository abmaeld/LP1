
#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>
#include <string>
#include "../include/Node.hpp"
#include "../include/Funcionarix.hpp"
#include "../include/Operarix.hpp"
#include "../include/Gerente.hpp"
#include "../include/Secretarix.hpp"


template <class T> class List {

	public:

	     List();

	    ~List();

	    void Add(T* data_address);

	    void Add(T* data_address, unsigned short index);

	    void Remove(unsigned short index);

	    void Print();

	    void Print_Treinamento();

	    void Reajustar(float taxa);

	    void Reajustar_Operarix(float taxa);

	    void Reajustar_Gerente(float taxa);

	    void Reajustar_Secretarix(float taxa);

	    unsigned short getSize();

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
		delete Temp->getNext();

		Size--;

	}

	delete Beginning;
	Beginning = nullptr;
	Ending = Beginning;

	Size--;

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
			
			delete Beginning;
			Beginning = nullptr;
			Ending = Beginning;
			Size--;

		}

		else if (index == 1) {

			Node<T>* Temp = Beginning;

			Beginning = Beginning->getNext();
			Beginning->setPrevious(nullptr);

			//std::cout << std::endl << "  " << *(Temp->getData_Address()) << " at Index " << index << " was Removed from List;" << std::endl;

			delete Temp;
			Temp = nullptr;

			Size--;

		}

		else if (index == Size) {

			Node<T>* Temp = Ending;

			Ending = Ending->getPrevious();
			Ending->setNext(nullptr);

			//std::cout << std::endl << "  " << *(Temp->getData_Address()) << " at Index " << index << " was Removed from List;" << std::endl;

			delete Temp;
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

			delete Temp;
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

			if (Temp->getData_Address()->getFunction() == 1) {

				Operarix* Aux = (Operarix*) Temp->getData_Address();

				std::cout << *Aux << std::endl;
				
				Aux = nullptr;
			
			}

			else if (Temp->getData_Address()->getFunction() == 2) {

				Gerente* Aux = (Gerente*) Temp->getData_Address();

				std::cout << *Aux << std::endl;
				
				Aux = nullptr;

			}

			else if (Temp->getData_Address()->getFunction() == 3) {

				Secretarix* Aux = (Secretarix*) Temp->getData_Address();

				std::cout << *Aux << std::endl;
				
				Aux = nullptr;

			}

			else {

				// Invalid Function

			}

			Temp = Temp->getNext();

		}

	}

	else {

		std::cerr << std::endl << "    Empty List;" << std::endl;

	}

}

template <class T> void List<T>::Print_Treinamento() {

	if (Ending != nullptr) {

		Node<T>* Temp = Beginning; int index = 0;

		while (Temp != nullptr) {

			index++;

			if (Temp->getData_Address()->getTotal_Days_Worked() < 90) {

				std::cout << std::endl << "    " << index << ": ";

				if (Temp->getData_Address()->getFunction() == 1) {

					Operarix* Aux = (Operarix*) Temp->getData_Address();

					std::cout << *Aux << std::endl;
					
					Aux = nullptr;
				
				}

				else if (Temp->getData_Address()->getFunction() == 2) {

					Gerente* Aux = (Gerente*) Temp->getData_Address();

					std::cout << *Aux << std::endl;
					
					Aux = nullptr;

				}

				else if (Temp->getData_Address()->getFunction() == 3) {

					Secretarix* Aux = (Secretarix*) Temp->getData_Address();

					std::cout << *Aux << std::endl;
					
					Aux = nullptr;

				}

				else {

					// Invalid Function

				}

			}

			Temp = Temp->getNext();

		}

	}

	else {

		std::cerr << std::endl << "    Empty List;" << std::endl;

	}

}

template <class T> void List<T>::Reajustar(float taxa) {

	if (Ending != nullptr) {

		Node<T>* Temp = Beginning; int index = 0;

		while (Temp != nullptr) {

			Temp->getData_Address()->setSalary(Temp->getData_Address()->getSalary() * taxa);

			Temp = Temp->getNext();

		}

	}

	else {

		std::cerr << std::endl << "    Empty List;" << std::endl;

	}

}

template <class T> void List<T>::Reajustar_Operarix(float taxa) {

	if (Ending != nullptr) {

		Node<T>* Temp = Beginning; int index = 0;

		while (Temp != nullptr) {

			if (Temp->getData_Address()->getFunction() == 1) {

				Temp->getData_Address()->setSalary(Temp->getData_Address()->getSalary() * taxa);
			
			}

			Temp = Temp->getNext();

		}

	}

	else {

		std::cerr << std::endl << "    Empty List;" << std::endl;

	}

}

template <class T> void List<T>::Reajustar_Gerente(float taxa) {

	if (Ending != nullptr) {

		Node<T>* Temp = Beginning; int index = 0;

		while (Temp != nullptr) {

			if (Temp->getData_Address()->getFunction() == 2) {

				Temp->getData_Address()->setSalary(Temp->getData_Address()->getSalary() * taxa);
			
			}

			Temp = Temp->getNext();

		}

	}

	else {

		std::cerr << std::endl << "    Empty List;" << std::endl;

	}

}

template <class T> void List<T>::Reajustar_Secretarix(float taxa) {

	if (Ending != nullptr) {

		Node<T>* Temp = Beginning; int index = 0;

		while (Temp != nullptr) {

			if (Temp->getData_Address()->getFunction() == 3) {

				Temp->getData_Address()->setSalary(Temp->getData_Address()->getSalary() * taxa);
			
			}

			Temp = Temp->getNext();

		}

	}

	else {

		std::cerr << std::endl << "    Empty List;" << std::endl;

	}

}

template <class T> unsigned short List<T>::getSize() {
	
	return Size;
	
}

#endif