#include "Stdafx.h"
#include "Author.h"
#include <iostream>
using namespace std;

Author::Author(void)
{
cout<<"конструктор автора"<<endl;
}

void Author::setjanr(char *janr)
{
this->janr=janr;
}

void Author::getjanr()
{
	cout<<"Жанр автора: "<<this->janr<<endl;
}

Author::~Author(void)
{}