#include "state.h"
#include <iostream>
using namespace std;
State::State()
{};

State::State(int population, char* capital)
{
	population_ = population;
	capital_ = capital;
	/*obj_.setName(obj_.getName());
	obj_.setLandshare(obj_.getLandshare());
	obj_.setSquare(obj_.getSquare());*/

}

State::~State()
{
}

void State::setContname(char* contname)
{
	this->contname_ = contname;
}
char* State::getContname()
{
	return contname_;
}
void State::setName(char* name)
{
	this->name_ = name;
}

char* State::getName()
{
	return this->name_;
}

void State::setPopulation(int population)
{
	population_ = population;
}

int State::getPopulation()
{
	return population_;
}

void State::setCapital(char* capital)
{
	capital_ = capital;  
}

char* State::getCapital()
{
	return capital_;
}
