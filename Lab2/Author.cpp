#include "Stdafx.h"
#include "Author.h"
#include <iostream>
using namespace std;

Author::Author(void)
{
cout<<"����������� ������"<<endl;
}

void Author::setjanr(char *janr)
{
this->janr=janr;
}

void Author::getjanr()
{
	cout<<"���� ������: "<<this->janr<<endl;
}

Author::~Author(void)
{}