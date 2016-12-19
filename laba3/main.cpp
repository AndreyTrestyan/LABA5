#include "land.h"
#include "sea.h"
#include "state.h"
#include "island.h"
#include "continent.h"
#include <iostream>
#include "windows.h"
#include "printer.h"
#include "container.h"
#include "controller.h"

using namespace std;



void main()
{

/*	Land earth;	
	Continent c;
	State e;
	Island greenland;
	Sea b;
	Sea::Fish r; // nested class

	
	earth.setSquare(40000);
	cout <<"square of the earth "<< earth.getSquare() << endl;
	c.setSquare(2000);
	c.setName("Africa");
	cout << "square of the "<<c.getName() <<" "<< c.getSquare() << endl;
	//e.setSquare(500);
	e.setName("Egypt");
	//cout << "square of the " << e.getName() << " " << e.getSquare() << endl;
	c.seaobj.setName("Black");
	c.seaobj.setDeep(12);
	cout << "deep of the " << c.seaobj.getName() << " sea is " << c.seaobj.getDeep() << endl;
	b.GetNested(r);


	cout << earth.GetCounter() << endl;

	Continent *america = new Continent;
	Continent continent1;
	america = &continent1;
	america->setLandshare(500);
	america->setName("America");
	america->setSquare(1000);
	Printer all;
	all.iAmPrinting(america);

	State USA;
	USA.setCapital("Washington");
	USA.setName("USA");
	USA.setPopulation(5000000);
	USA.toConsole();

	// преобразование типов dynamic_cast
	Land *land = new Continent();
	Continent *cont;
	cont = dynamic_cast<Continent*>(land);

	// static_cast
	Land *ttt;
	Continent *mmm = new Continent();
	ttt = mmm;
	mmm = static_cast<Continent*>(ttt);

	//сonst_cast
	const int t = 777;
	int *ptr;
	ptr = const_cast<int*>(&t);
	*/
	
	
	
	State a1, a2;
	a1.setContname("Eurasia");
	a1.setName("France");
	a2.setContname("Eurasia");
	a2.setName("Germany");
	
	cout <<"States of "<< a1.getContname()<<":"<<endl;

	Container container;
	Controller controller;

	container.add(&a1);
	container.add(&a2);
	controller.searchContinent(&container, "Eurasia");
	
	
	
	
	Sea b1, b2;
	b1.setContname("Eurasia");
	b1.setName("Black");
	b2.setContname("Eurasia");
	b2.setName("Death");
	cout <<"number of seas in "<< b1.getContname() << ":" << endl;
	Container container2;
	container2.add(&b1);
	container2.add(&b2);
	controller.numberofseas(&container2, "Eurasia");

	system("pause");
}
