#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

template<class T>
class LinkedList{

  public:
    LinkedList();
    ~LinkedList();

    void push(Node<T>* newNode);
    void insert(const T &val);
    void deleteBucket(const T &val);
    bool exists(const T &val);
    void printList();
    bool valid();
    unsigned int length() const;

    /*
    void krprintList(intNode *head);
    struct intNode *buildListN(int num, const int coe);
    int countInt(struct intNode *node, int desired);
    void test(struct intNode *headintNode);
    int getNth2(struct intNode *head, const int index);
    int getNth(struct intNode *head, const int index);
    void deleteList(struct intNode **headintNode);
    void append(struct intNode ** refA, struct intNode** refB);
    void insertNth(struct intNode** headRef, const int index, const int data);
    void frontBackSplit(struct intNode* src, struct intNode **frontRef, struct intNode** backRef);
    int len(struct intNode *head);
    void removeDuplicates(struct intNode* head);
    void moveNode(struct intNode ** destRef, struct intNode** srcRef);
    void alternatingSplit(struct intNode* src, struct intNode** aRef, struct intNode** bRef);
    void reverseWithPointers(struct intNode** headRef);
    void recursiveReverse(struct intNode** headRef);
     */

  private:
    Node<T>* _head;
    Node<T>* _tail;

    unsigned int len;
};

template<class T>
LinkedList<T>::LinkedList() :
	_head(NULL), _tail(NULL), len(0){
}

template<class T>
LinkedList<T>::~LinkedList(){
	Node<T>* next;
	while(_head){
		next = _head->next;
		delete _head;
		_head = next;
	}
};

template<class T>
void LinkedList<T>::push(Node<T>* newNode){
  if(newNode){
    newNode->next = _head;
    _head = newNode;
    len++;
  }
}

template<class T>
void LinkedList<T>::insert(const T &val){
  Node<T>* temp = _head;

  while(temp){
    if (temp->data == val)
      return;

    temp = temp->next;
  }

  Node<T>* newNode = new Node<T>(val);
  push(newNode);
}

template<class T>
bool LinkedList<T>::exists(const T &val){
	Node<T>* cur = _head;

	while(cur){
		if (cur->data == val){
			return true;
		}
		cur = cur->next;
	}

	return false;
}

template<class T>
void LinkedList<T>::deleteBucket(const T &val){
	if (!_head) return;

	Node<T>** cur = &_head;

	while(*cur){
		if ((*cur)->data == val){
			if((*cur)->next){
				Node<T>* tmpNode = (*cur)->next;
				(*cur)->data = (*cur)->next->data;
				(*cur)->next = (*cur)->next->next;
				delete tmpNode;
			}
			else{
				delete (*cur);
				*cur = NULL;
			}
			len--;
			return;
		}
		cur = &(*cur)->next;
	}
}

template<class T>
void LinkedList<T>::printList(){
	if (!_head) return;

	Node<T>* temp = _head;

	while(temp){
		std::cout << temp->data << ", ";
		temp = temp->next;
	}
}

template<class T>
bool LinkedList<T>::valid(){
	if (_head)
		return true;

	return false;
}

template<class T>
unsigned int LinkedList<T>::length() const {
	return len;
}

#endif
