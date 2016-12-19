#pragma once
#include <iostream>
#include "continent.h"
class State :  public Planet
{
public:
	void setName(char *name);
	char* getName();
	void setPopulation(int population);
	int getPopulation();
	void setCapital(char *name);
	char* getCapital();
	void setContname(char *cont);
	char* getContname();
	State();
	State(int, char*);
	//State(int, char*, Continent &obj);
	~State();

	void toConsole() { std::cout << typeid(this).name() << " " << *capital_ << " " << population_ << std::endl; }
private:
	char *contname_; // ������������� ����������
	char *name_; // ������������
	char *capital_; // �������
	int population_; // ���������
};