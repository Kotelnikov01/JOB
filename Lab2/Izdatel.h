#pragma once
#include "Person.h"

class Izdatel :
	public Person
{
	int strana;
	
public:
	Izdatel(void);
	void setstrana(int strana);
	void getstrana();

	~Izdatel(void);
};