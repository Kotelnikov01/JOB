#pragma once
#include "Izdanie.h"

class Ycheb :
public Izdanie
{
	int tiraj;
	
public:
	Ycheb(void);
	void settiraj (int tiraj);
	void gettiraj();

	~Ycheb(void);

};