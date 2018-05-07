
#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>
#include <iomanip>
#include <string>

#include "../include/Node.hpp"

template <class T> class List {

	public:

	     List();

	    ~List();

	    void Add(T Data);

	    void Remove(unsigned int index);

	    void SearchFor(std::string Code);

	    void Most_Expensive();

	    void Print();

	private:

		unsigned int Size;

		Node<T> *Beginning, *End;

};

template <class T> List<T>::List() {

	Beginning = nullptr;
	End = nullptr;
	Size = 0;

}

template <class T> List<T>::~List() {

	Node<T>* Temp = End;

	while (Temp != Beginning) {

		Temp = Temp->getPrevious();
		delete Temp->getNext();
		Temp->setNext(nullptr);
		Size--;

	}

	delete Beginning;
	Beginning = nullptr;
	Size--;

}

template <class T> void List<T>::Add(T Data) {

	if (End == nullptr) {

	    End = new Node<T>;

	    End->setPrevious(nullptr);
	            
	    End->setData(&Data);            

	    End->setNext(nullptr);

	    Beginning = End;

	}

	else {

	    Node<T>* Temp = new Node<T>;

	    Temp->setPrevious(End);
	            
	    Temp->setData(&Data);
	            
	    Temp->setNext(nullptr);

	    End->setNext(Temp);

	    End = End->getNext();
	 
	}

	std::cout << std::endl << "  " << End->getData().getName() << " adicionado a lista." << std::endl;

	Size++;
	 
}

template <class T> void List<T>::Remove(unsigned int index) {

	if (index != 1 && index != Size) {

		if (index > 1 && index < Size) {

			Node<T>* Temp = Beginning;

			for (unsigned int i = 1; i < index; i++) {

				Temp = Temp->getNext();

			}

			Temp->getPrevious()->setNext(Temp->getNext());
			Temp->getNext()->setPrevious(Temp->getPrevious());

			std::cout << std::endl << "  " << Temp->getData().getName() << " removido da lista." << std::endl;

			delete Temp;
			Temp = nullptr;
			Size--;

		}

		else {

			std::cout << std::endl << "  O indice fornecido e invalido." << std::endl;

		}

	}

	else if (index == 1 && Size > 1) {

		Node<T>* Temp = Beginning;

		Beginning->getNext()->setPrevious(nullptr);
		Beginning = Beginning->getNext();

		std::cout << std::endl << "  " << Temp->getData().getName() << " removido da lista." << std::endl;

		delete Temp;
		Temp = nullptr;
		Size--;

	}

	else if (index == Size && Size > 1) {

		Node<T>* Temp = End;

		End->getPrevious()->setNext(nullptr);
		End = End->getPrevious();

		std::cout << std::endl << "  " << Temp->getData().getName() << " removido da lista." << std::endl;

		delete Temp;
		Temp = nullptr;
		Size--;

	}

	else {

		std::cout << std::endl << "  " << Beginning->getData().getName() << " removido da lista." << std::endl;

		delete Beginning;
		Beginning = nullptr;
		End = Beginning;
		Size--;

	}
	 
}

template <class T> void List<T>::SearchFor(std::string Code) {

	Node<T>* Temp = Beginning; int Index = 0, Found = 0;

	while (Temp != nullptr) {

		++Index;

		if (Temp->getData().getCode() == Code) {

			std::cout << std::endl << "  " << Temp->getData().getName() << " foi localizado no indice " << Index << std::endl;
			Found++;

		}

		Temp = Temp->getNext();

	}

	if (Found == 0) {

		std::cout << std::endl << "  Produto de codigo " << Code << " nao pode ser localizado na lista." << std::endl;
	
	}

	return;

}

template <class T> void List<T>::Most_Expensive() {

	if (End != nullptr) {

		Node<T> *Temp = Beginning, *Most_Expensive = Temp; int Index = 1, Most_Expensive_Index = Index;

		while (Temp != nullptr) {

			if (Temp->getData().getPrice() > Most_Expensive->getData().getPrice()) {

				Most_Expensive = Temp;
				Most_Expensive_Index = Index;

			}

			Temp = Temp->getNext();
			Index++;

		}

		std::cout << std::endl << "  " << Most_Expensive->getData().getName() << " e o produto mais caro da lista e esta no indice " << Most_Expensive_Index << std::endl;

	}

	else {

		std::cout << std::endl << "  Lista vazia." << std::endl;
		
	}

}

template <class T> void List<T>::Print() {

	if (End != nullptr) {

		std::cout << std::endl << "  Listando " << Size << " produto(s): " << std::endl; 

		Node<T>* Temp = Beginning; int Index = 0;

		while (Temp != nullptr) {

			std::cout << std::endl << "  " << std::setw(3) << ++Index << " : " << Temp->getData().getName() << std::endl;

			Temp = Temp->getNext();

		}

	}

	else {

		std::cout << std::endl << "  Lista vazia." << std::endl;

	}

}

#endif