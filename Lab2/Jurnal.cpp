#include "Stdafx.h"
#include "Jurnal.h"
#include <iostream>
using namespace std;

Jurnal::Jurnal(void)
{
	cout<<"конструктор журнал "<<endl;
}

void Jurnal::settiraj(int tiraj)
{
	this->tiraj=tiraj;
}

void Jurnal::gettiraj()
{
	cout<<"Тираж журнала: "<<this->tiraj<<endl;
}
Jurnal::~Jurnal(void)
{}