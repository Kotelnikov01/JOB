#include "Stdafx.h"
#include "Kniga.h"
#include <iostream>
using namespace std;

Kniga::Kniga(void)
{
	cout<<"����������� ����� "<<endl;
}

void Kniga::settiraj(int tiraj)
{
	this->tiraj=tiraj;
}

void Kniga::gettiraj()
{
	cout<<"����� ����: "<<this->tiraj<<endl;
}
Kniga::~Kniga(void)
{}