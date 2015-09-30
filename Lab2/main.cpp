#include "Stdafx.h"
#include "Person.h"
#include "Izdanie.h"
#include "Author.h"
#include "Izdatel.h"
#include "Jurnal.h"
#include "Kniga.h"
#include "Ycheb.h"
#include "locale"
#include <iostream>
using namespace std;

int _tmain (int argc, _TCHAR* argv[])
{
	
	setlocale(LC_ALL,"rus");
	
	Izdatel b;
	b.setname("Издательство 'Южный берег'");
	b.getname();
	b.setstrana(26);
	b.getstrana();

	cout<<endl;
	Izdatel k;
	k.setname("Издательство 'Восток'");
	k.getname();
	k.setstrana(18);
	k.getstrana();

	cout<<endl;

	Author h;
	h.setname("Александр Могилевский");
	h.getname();
	h.setjanr("Раманы,Фантастика");
	h.getjanr();
	
	cout<<endl;

	Izdanie d;
	d.setname("Печатное издание ");
	d.getname();
	
	cout<<endl;

	Jurnal e;
	e.setname("FIT jurnal ");
	e.getname();
	e.settiraj(12000);
	e.gettiraj();

	cout<<endl;

	Kniga f;
	f.setname("FIT kniga ");
	f.getname();
	f.settiraj(13000);
	f.gettiraj();

	cout<<endl;
	
	Ycheb g;
	g.setname("FIT ychebnik ");
	g.getname();
	g.settiraj(14000);
	g.gettiraj();

	cout<<endl;

	return 0;
}

