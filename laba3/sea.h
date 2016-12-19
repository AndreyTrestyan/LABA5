#pragma once
#include "planet.h"
#include <iostream>
using namespace std;
class Sea: public Planet
{
public:
	void setName(char *name);
	char* getName();
	void setSalt(int salt);
	int getSalt();
	void setDeep(int deep);
	int getDeep();
	void setContname(char *cont);
	char* getContname();
	Sea();
	~Sea();
	class Fish
	{
	public:
		void GetAny(Sea &obj);
		int numberof();
	};
	void GetNested(Fish &obj);
	void toConsole() { cout << typeid(this).name() << " " << *name_ << " " << deep_ << endl; }
private:
	char *contname_;
	char *name_; // имя
	int deep_; // глубина
	int salt_; // солёность
};