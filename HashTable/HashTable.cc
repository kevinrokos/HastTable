/*
 * Written and tested on 12/9/2015
 * 12/10 -- Updated to use chaining with LinkedList for collision avoidance
 */

#include "HashTable.h"
#include <stdio.h>

//HashTable::HashTable(){
//  _size = DEFAULT_SIZE;
//  initialize();
//};
//
//HashTable::HashTable(const ull &size){
//  _size = size;
//  initialize();
//}
//
//void HashTable::initialize(){
//  _hTable = new LinkedList<std::string>*[_size];
//
//  unsigned int i = 0;
//  while(i < _size){
//    _hTable[i++] = new LinkedList<std::string>;
//  }
//}
//
//HashTable::~HashTable(){};
//
//const ull HashTable::hash(const std::string &val){
//  const char* s = val.c_str();
//  int t = 0;
//  int scalar = 1;
//
//  while(*s){
//    t += (*s - '0') * scalar;
//    ++s;
////    ++scalar;
//  }
//
//  return t;
//}
//
////Tested 12/11/2015
//void HashTable::insert(const std::string &val){
//  ull hashNum = hash(val) % _size;
//  printf("Inserting '%s' at value: %llu\n", val.c_str(), hashNum);
//
//  _hTable[hashNum]->insert(val);
//}
//
////Tested 12/15/2015
//bool HashTable::find(const std::string &val){
//	ull hashNum = hash(val) % _size;
//	printf("Searching for '%s' at value: %llu\n", val.c_str(), hashNum);
//
//	return _hTable[hashNum]->exists(val);
//}
//
//// Tested 12/17/2015  -- for realz
//void HashTable::deleteEntry(const std::string val){
//	ull hashNum = hash(val) % _size;
//	printf("Deleting '%s' at value: %llu\n", val.c_str(), hashNum);
//
//	_hTable[hashNum]->deleteBucket(val);
//}
//
//// Tested 12/14/2015
//void HashTable::printTable() const{
//	for(unsigned int i= 0; i < _size; i++){
//		if( _hTable[i] && _hTable[i]->valid()){
//			printf("Value(s) @ %d -> ", i);
//			_hTable[i]->printList();
//			std::cout << std::endl;
//		}
//	}
//}
//
