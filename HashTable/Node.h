#include <iostream>

template<class T>
class Node{
  public:
    T data;
    Node<T>* next;

    Node<T>() : next(NULL) {};

    Node<T>(const T& d):
    		data(d), next(NULL) {}
};
