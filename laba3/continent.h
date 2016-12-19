#pragma once
#include "land.h"
#include "sea.h"

class Continent : public Land
{
public:
	void setLandshare(int landshare);
	int getLandshare();
	void setName(char *name);
	char* getName();
	Sea seaobj;
	Continent();
	~Continent();
	const int contnumber = 7; // ����� �����������
	const void showcontnumb();
	void toConsole() { std::cout << typeid(this).name() << " " << *name_ << " " << landshare_ << std::endl; }
private:

	char *name_; // ���
	int landshare_; // ���� ����
};
