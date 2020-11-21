# include <iostream>
# include "DLL.h"

using namespace std;

template <class T>
class Queue{
    public:
        Queue(); // default constructor
        ~Queue(); // destructor

        void insert(T d);
        T remove();
        T peek();

        bool isFull();
        bool isEmpty();
        int getSize();

        int numElements;

        DLL<T>* myQueue;
};


template <class T>
Queue<T>::Queue(){
    myQueue = new DLL<T>();
    numElements = 0;
}

template <class T>
Queue<T>::~Queue(){
    delete myQueue;
}

template <class T>
void Queue<T>::insert(T d){
    myQueue -> insertBack(d);
    ++numElements;
}

template <class T>
T Queue<T>::remove(){
    if (isEmpty()) {
        cout << "Queue empty." << endl;
        // return NULL;
    }

    else {
        T c = myQueue -> removeFront();

        --numElements;

        return c;
    }
}

template <class T>
T Queue<T>::peek(){
    if (isEmpty()) {
        cout << "Queue empty." << endl;
        // return NULL;
    }

    else {
        return (myQueue -> front -> data);
    }
}


template <class T>
bool Queue<T>::isEmpty(){
    return (numElements == 0);
}

template <class T>
int Queue<T>::getSize(){
    return numElements;
}
