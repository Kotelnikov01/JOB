#include "Stdafx.h"
#include "Izdatel.h"
#include <iostream>
using namespace std;

Izdatel::Izdatel(void)
{}

void Izdatel::setstrana(int strana)
{
	this->strana=strana;
}

void Izdatel::getstrana()
{
	cout<<"��������� ������������ �����: "<<this->strana<<endl;
}
Izdatel::~Izdatel(void)
{}