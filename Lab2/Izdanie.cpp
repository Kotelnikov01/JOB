#include "Stdafx.h"
#include "Izdanie.h"
#include <iostream>
using namespace std;

Izdanie::Izdanie(void)
{}
void Izdanie::setname(char *name)
{
	this->name=name;
}
void Izdanie::getname()
{
	cout<<"Название : "<<this->name<<endl;
}
Izdanie::~Izdanie(void)
{}