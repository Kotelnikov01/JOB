#include "Stdafx.h"
#include "Kniga.h"
#include <iostream>
using namespace std;

Kniga::Kniga(void)
{
	cout<<"конструктор книги "<<endl;
}

void Kniga::settiraj(int tiraj)
{
	this->tiraj=tiraj;
}

void Kniga::gettiraj()
{
	cout<<"Тираж книг: "<<this->tiraj<<endl;
}
Kniga::~Kniga(void)
{}