#include "Stdafx.h"
#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(void)
{}
void Person::setname(char *name)
{
	this->name=name;
}
void Person::getname()
{
	cout<<"��� �������: "<<this->name<<endl;
}
Person::~Person(void)
{}