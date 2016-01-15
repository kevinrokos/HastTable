#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "LinkedList.h"
#include "Hash.h"
#include <string>
#include <stdio.h>

typedef unsigned long long ull;

template<class T>
class HashTable{

  public:
    HashTable();
    HashTable(const unsigned long long &size);
    ~HashTable();

    void insert(const T &val);
    bool find(const T &val);
    void deleteEntry(const T val);
    void printTable() const;

  private:
    const size_t hash(const T &val);

    void initialize();

    unsigned long long _size;
    static const unsigned long long DEFAULT_SIZE = 1024;
    LinkedList<T>** _hTable;
};

template<class T>
HashTable<T>::HashTable(){
  _size = DEFAULT_SIZE;
  initialize();
};

template<class T>
HashTable<T>::HashTable(const ull &size){
  _size = size;
  initialize();
}

template<class T>
void HashTable<T>::initialize(){
  _hTable = new LinkedList<T>*[_size];

  unsigned int i = 0;
  while(i < _size){
    _hTable[i++] = new LinkedList<T>;
  }
}

template<class T>
HashTable<T>::~HashTable(){
	for(unsigned int i= 0; i < _size; i++){
		if( _hTable[i] && _hTable[i]->valid()){
			delete _hTable[i];
		}
	}
};

template<class T>
const size_t HashTable<T>::hash(const T &val){
   Hash<T> hv(T);
//   return hv.hashVal();
   return 1;
}

//template<class T>
//const ull HashTable<T>::hash(const T &val){
//  const char* s = val.c_str();
//  int t = 0;
//  int scalar = 1;
//
//  while(*s){
//    t += (*s++ - '0') * scalar;
//    ++scalar;
//  }
//
//  return t;
//}

//template<>
//const ull HashTable<std::string>::hash(const std::string& val){
//	const char* s = val.c_str();
//	int t = 0;
//	int scalar = 1;
//
//	while(*s){
//		t += (*s++ - '0') * scalar;
//		++scalar;
//	}
//
//	return t;
//}
//
//template<>
//const ull HashTable<int>::hash(const int& val){
//	int tmp = val;
//	int t = 0;
//	t += (tmp % 10)*2;
//
//	return t;
//}

//Tested 12/11/2015
template<class T>
void HashTable<T>::insert(const T &val){
  ull hashNum = hash(val) % _size;
  _hTable[hashNum]->insert(val);
}

//Tested 12/15/2015
template<class T>
bool HashTable<T>::find(const T &val){
	ull hashNum = hash(val) % _size;
	return _hTable[hashNum]->exists(val);
}

// Tested 12/17/2015  -- for realz
template<class T>
void HashTable<T>::deleteEntry(const T val){
	ull hashNum = hash(val) % _size;
	_hTable[hashNum]->deleteBucket(val);
}

// Tested 12/14/2015
template<class T>
void HashTable<T>::printTable() const{
	for(unsigned int i= 0; i < _size; i++){
		if( _hTable[i] && _hTable[i]->valid()){
			std::cout << "Value(s) @ " << i << " -> ";
			_hTable[i]->printList();
			std::cout << std::endl;
		}
	}
}


#endif
