#pragma once
#include "planet.h"

#define SIZE 50

class Container {
	int size_;
	int maxSize_;
public:
	Planet **arr_;
	Container();
	void add(Planet *);
	void clear(int);
	void set(Planet **);
	Planet *get(int);
	Planet **get() { return arr_; }
	int getSize() { return size_; }
}; 
