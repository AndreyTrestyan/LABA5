#pragma once
#include "Continent.h"

class Island : public Continent
{
public:
	void setCountry(char *country);
	char* getCountry();
	Island();
	~Island();

private:
	char *country_; // ����� ������ �����������
};
