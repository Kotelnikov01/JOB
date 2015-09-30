#include "Stdafx.h"
#include "Ycheb.h"
#include <iostream>
using namespace std;

Ycheb::Ycheb(void)
{}

void Ycheb::settiraj(int tiraj)
{
	this->tiraj=tiraj;
}

void Ycheb::gettiraj()
{
	cout<<"Тираж учебников: "<<this->tiraj<<endl;
}
Ycheb::~Ycheb(void)
{}