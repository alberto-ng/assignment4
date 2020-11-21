# include <iostream>

using namespace std;


template <class T>
class Node{
    public:
        Node();
        Node(T d);
        ~Node();

        T data;
        Node* next;
        Node* prev;

};


template <class T>
Node<T>::Node(){
    data = NULL;
    next = NULL;
    prev = NULL;
}

template <class T>
Node<T>::Node(T d){
    data = d;
    next = NULL;
}

template <class T>
Node<T>::~Node(){
    next = NULL;
    prev = NULL;
}
