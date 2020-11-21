# include <iostream>
# include "Node.h"

using namespace std;

template <class T>
class DLL{
    public:
        DLL();
        ~DLL();

        void insertFront(T d);
        void insertBack(T d);

        T removeFront();
        T removeBack();

        T find(T value);
        T deletePos(int pos);

        void printList();
        bool isEmpty();
        unsigned int getSize();

        Node<T>* front;
        Node<T>* back;
        unsigned int size;
};


template <class T>
// default
DLL<T>::DLL(){
    front = NULL;
    back = NULL;
    size = 0;
}

template <class T>
// destructor
DLL<T>::~DLL(){
    Node<T>* curr = front;
    Node<T>* tempNext = curr;

    while(curr != NULL){
        tempNext = curr -> next;
        delete curr;
        curr = tempNext;

    }
}


template <class T>
void DLL<T>::insertFront(T d){
    Node<T>* node = new Node<T>(d);

    if(size == 0){
        back = NULL;
    }

    else{
        node -> next = front;
        front -> prev = node;
    }

    front = node;

    ++size;
}

template <class T>
void DLL<T>::insertBack(T d){
    Node<T>* node = new Node<T>(d);

    if(size == 0){
        front = node;
    }
    else{
        back -> next = node;
        node -> prev = back;
    }

    back = node;
    ++size;
}

template <class T>
T DLL<T>::removeFront(){
    Node<T>* temp = front;
    if (size == 0){
        cout << "list is empty." << endl;
        // return 0;
    }
    else if(temp -> next == NULL){
        back = NULL;
    }
    else{
        front -> next -> prev = NULL;
    }

    front = front -> next;
    temp -> next = NULL;
    T d = temp -> data;

    size--;

    delete temp;
    return d;
}

template <class T>
T DLL<T>::removeBack(){
    Node<T>* temp = back;
    if (size == 0){
        cout << "list is empty." << endl;
        // return 0;
    }
    else if(temp -> prev == NULL){
        front = NULL;
    }
    else{
        back -> prev -> next = NULL;
    }

    back = back -> prev;
    temp -> prev = NULL;
    T d = temp -> data;

    size--;

    delete temp;
    return d;
}

template <class T>
void DLL<T>::printList(){
    Node<T>* curr = front;

    while(curr != NULL){
        cout << curr -> data << endl;
        curr = curr -> next;
    }
}

template <class T>
T DLL<T>::find(T value){
    int pos = -1;
    Node<T>* curr = front;

    while(curr != NULL){
        ++pos;
        if (curr -> data == value){
            return pos;
        }

        curr = curr -> next;
    }

    if (curr == NULL){
        pos = -1;
    }
    return pos;
}

template <class T>
T DLL<T>::deletePos(int pos){
    if (size == 0){
        cout << "list is empty." << endl;
        return;
    }
    else if (pos >= size){
        cout << "invalid pos." << endl;
        return;
    }

    int p = 0;
    Node<T>* tempCurr = front;
    Node<T>* tempPrev = front;

    while(p != pos){
        tempPrev = tempCurr;
        tempCurr = tempCurr -> next;
        p++;
    }

    tempPrev -> next = tempCurr -> next;
    tempCurr -> next -> prev = tempPrev;
    tempCurr -> next = NULL;
    tempCurr -> prev = NULL;

    T temp = tempCurr -> data;
    size--;

    delete tempCurr;
    return temp;
}

template <class T>
bool DLL<T>::isEmpty(){
    return (size == 0);
}

template <class T>
unsigned int DLL<T>::getSize(){
    return size;
}
