#pragma once
#include "Izdanie.h"

class Jurnal :
public Izdanie
{
	int tiraj;
	
public:
	Jurnal(void);
	void settiraj (int tiraj);
	void gettiraj();

	~Jurnal(void);

};