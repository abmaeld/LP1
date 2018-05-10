
#ifndef NODE_HPP
#define NODE_HPP

template <class T> class Node {
	
	public:

		 Node();
		~Node();

		void setPrevious(Node<T> *previous);
		Node<T>* getPrevious();

		void setData(T *data);
		T getData();
		T* getData_Addr();

		void setNext(Node<T> *next);
		Node<T>* getNext();
    
    private:

	    Node<T> *Previous, *Next;

	    T *Data;

};

template <class T> Node<T>::Node() {

	Data = nullptr;

}

template <class T> Node<T>::~Node() {

	delete Data;
	Data = nullptr;

}

template <class T> void Node<T>::setPrevious(Node<T> *previous) {

	Previous = previous;

}

template <class T> Node<T>* Node<T>::getPrevious() {

	return Previous;

}

template <class T> void Node<T>::setData(T *data) {

	Data = data;

}

template <class T> T Node<T>::getData() {

	return *Data;

}

template <class T> T* Node<T>::getData_Addr() {

	return Data;

}

template <class T> void Node<T>::setNext(Node<T> *next) {

	Next = next;

}

template <class T> Node<T>* Node<T>::getNext() {

	return Next;

}

#endif