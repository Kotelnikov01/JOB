#pragma once
#include "Izdanie.h"

class Kniga :
public Izdanie
{
	int tiraj;
	
public:
	Kniga(void);
	void settiraj (int tiraj);
	void gettiraj();

	~Kniga(void);

};