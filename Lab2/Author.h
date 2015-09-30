#pragma once
#include "Izdatel.h"

class Author:
	public Izdatel
{
	char *janr;
public:
  Author(void);

	void setjanr(char *janr);
	void getjanr();

	~Author(void);
};