
#ifndef NODE_HPP
#define NODE_HPP

template <class T> class Node {
	
	public:

		 Node();
		~Node();

		void setPrevious(Node<T>* previous);
		Node<T>* getPrevious();

		void setData_Address(T* data_address);
		T* getData_Address();

		void setNext(Node<T>* next);
		Node<T>* getNext();
    
    private:

	    Node<T>* Previous; Node<T>* Next;
	    T* Data_Address;

};

template <class T> Node<T>::Node() {

	Data_Address = nullptr;

}

template <class T> Node<T>::~Node() {

	delete Data_Address;
	Data_Address = nullptr;

}

template <class T> void Node<T>::setPrevious(Node<T>* previous) {

	Previous = previous;

}

template <class T> Node<T>* Node<T>::getPrevious() {

	return Previous;

}

template <class T> void Node<T>::setData_Address(T* data_address) {

	Data_Address = data_address;

}


template <class T> T* Node<T>::getData_Address() {

	return Data_Address;

}

template <class T> void Node<T>::setNext(Node<T>* next) {

	Next = next;

}

template <class T> Node<T>* Node<T>::getNext() {

	return Next;

}

#endif