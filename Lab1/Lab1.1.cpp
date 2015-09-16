
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
	cout << "Матрицы :"<<endl;
	int k = 1, i, j;

	BoolMatrix q[7];
	cout << endl;
	for (int c = 1; c <= 6; c++){
		q[c].BoolMatrixRand();
		q[c].BoolMatrixPrint();
	}

	for (;;){
		cout << "******************************************************************" << endl;
		cout << "Выбирите действие :";
		cout << "\n1-Логическое сложение \n2-Умножение \n3-Инверсия \n4-Подсчет единиц в матрице\n5-Вывести строки матрицы в лексекографическом порядке \n0-exit "<<endl;
		cin >> k;
		if (k == 0){ return(0); }
		if (k == 1){
			cout << "Матрицы для сложения (Матриц 6)" << endl;
			int first, two;
			cin >> first;
			cin >> two;
			q[first].BoolMatrixSum(q[two]);
			cout << "Ответ: " << endl;
			q[first].BoolMatrixPrint();
			cout << endl;
		}
		if (k == 2){
			cout << "Матрицы для умножения (Матриц 6)" << endl;
			int first, two;
			cin >> first;
			cin >> two;
			cout << "Ответ: " << endl;
			q[first].BoolMatrixPrint();
			cout << endl;
		}
		if (k == 3){
			cout << endl << "Матрица для инверсии (Матриц 6) : " << endl;
			int k;
			cin >> k;
			q[k].BoolMatrixInvercia();
			cout << "Ответ: " << endl;
			q[k].BoolMatrixPrint();
			cout << endl;
		}
		if (k == 4){
			cout << endl << "Матрица для подсчета едениц (Матриц 6) : " << endl;
			int k;
			cin >> k;
			cout << "Ответ: " << endl;
			q[k].BoolMatrixSkolkoEdinic();
			cout << endl;
		}
		if (k == 5){
			cout << endl << "Матрица для вывода её строк в лексекографическом порядке (Матриц 6) :" << endl;
			int k;
			cin >> k;
			cout << "Ответ: " << endl;
			q[k].BoolMatrixLekcika();


		}
		
	}
	return 0;
}

