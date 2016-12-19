#pragma once
#include "container.h"


class Container;
 
class Controller
{
public:
	void searchContinent(Container *object, char* str);
	int numberofseas(Container *object, char* str);
	void sort(Container *object);
};
