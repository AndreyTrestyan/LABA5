#include <iostream>
#include "controller.h"
#include "continent.h"
#include "state.h"

using namespace std;


void Controller::searchContinent(Container *object, char *str)
{
	Planet **array = object->get();
	int arraysize = object->getSize();
	for (int i = 0; i < arraysize; i++)
	{
		State *temp = dynamic_cast<State *> (object->arr_[i]);
 	if (strcmp(temp->getContname(), str) == 0)
		{
			cout << temp->getName() << endl;
		}

	}
}


int Controller::numberofseas(Container *object, char *str)
{
	int z = 0;
	Planet **array = object->get();
	int arraysize = object->getSize();
	for (int i = 0; i < arraysize; i++)
	{
		Sea *temp = dynamic_cast<Sea *> (object->arr_[i]);
		if (strcmp(temp->getContname(), str) == 0)
		{
			z++;
		}
	}
	cout << z << endl;;
	return z;
}


void Controller::sort(Container *object)
{
	
	}




