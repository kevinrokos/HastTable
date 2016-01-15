/*
 * hash.h
 *
 *  Created on: Jan 2, 2016
 *      Author: krokos
 */

#ifndef HASH_H_
#define HASH_H_


template<class T> class Hash{};

template<>
class Hash<int> {
 public:
	Hash(const int& val) : _hashVal(0){
		calcHash(val);
	}

	const size_t hashVal() const {
		return _hashVal;
	}

 private:
	size_t _hashVal;

	void calcHash(const int& val){
		int tmp = val;
		int t = 0;
		t += (tmp % 10)*2;

		_hashVal = t;
	}
};

template<>
class Hash<std::string> {
 public:
	Hash(const std::string& val) : _hashVal(0){
		calcHash(val);
	}

	const size_t hashVal() const {
		return _hashVal;
	}

 private:
	size_t _hashVal;

	void calcHash(const std::string& val){
		std::string tmp = val;
		const char* s = tmp.c_str();
		int t = 0;
		int scalar = 1;

		while(*s){
			t += (*s++ - '0') * scalar;
			++scalar;
		}

		_hashVal = t;
	}
};


#endif /* HASH_H_ */
