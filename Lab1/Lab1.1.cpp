
#include "stdafx.h"
#include"BoolMatrix.h"
#include <iostream>
#include <ctime>
#include <stdio.h>
#include<locale.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{


	setlocale(LC_ALL,"Russian");
	srand(time(0));
	cout << "������� :"<<endl;
	int k = 1, i, j;

	BoolMatrix q[7];
	cout << endl;
	for (int c = 1; c <= 6; c++){
		q[c].BoolMatrixRand();
		q[c].BoolMatrixPrint();
	}

	for (;;){
		cout << "******************************************************************" << endl;
		cout << "�������� �������� :";
		cout << "\n1-���������� �������� \n2-��������� \n3-�������� \n4-������� ������ � �������\n5-������� ������ ������� � ������������������ ������� \n0-exit "<<endl;
		cin >> k;
		if (k == 0){ return(0); }
		if (k == 1){
			cout << "������� ��� �������� (������ 6)" << endl;
			int first, two;
			cin >> first;
			cin >> two;
			q[first].BoolMatrixSum(q[two]);
			cout << "�����: " << endl;
			q[first].BoolMatrixPrint();
			cout << endl;
		}
		if (k == 2){
			cout << "������� ��� ��������� (������ 6)" << endl;
			int first, two;
			cin >> first;
			cin >> two;
			cout << "�����: " << endl;
			q[first].BoolMatrixPrint();
			cout << endl;
		}
		if (k == 3){
			cout << endl << "������� ��� �������� (������ 6) : " << endl;
			int k;
			cin >> k;
			q[k].BoolMatrixInvercia();
			cout << "�����: " << endl;
			q[k].BoolMatrixPrint();
			cout << endl;
		}
		if (k == 4){
			cout << endl << "������� ��� �������� ������ (������ 6) : " << endl;
			int k;
			cin >> k;
			cout << "�����: " << endl;
			q[k].BoolMatrixSkolkoEdinic();
			cout << endl;
		}
		if (k == 5){
			cout << endl << "������� ��� ������ � ����� � ������������������ ������� (������ 6) :" << endl;
			int k;
			cin >> k;
			cout << "�����: " << endl;
			q[k].BoolMatrixLekcika();


		}
		
	}
	return 0;
}

