#include "Stdafx.h"
#include "Jurnal.h"
#include <iostream>
using namespace std;

Jurnal::Jurnal(void)
{
	cout<<"����������� ������ "<<endl;
}

void Jurnal::settiraj(int tiraj)
{
	this->tiraj=tiraj;
}

void Jurnal::gettiraj()
{
	cout<<"����� �������: "<<this->tiraj<<endl;
}
Jurnal::~Jurnal(void)
{}