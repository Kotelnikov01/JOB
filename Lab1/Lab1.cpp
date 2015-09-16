#include"stdafx.h"
#include <iostream>
#include "BoolMatrix.h"
#include<ctime>


using namespace std;

void BoolMatrix::BoolMatrixSum(BoolMatrix b){

	int i, j, l;
	for (i = 1; i <= 6; i++){
		for (j = 1; j <= 6; j++)

			a[i][j] = a[i][j] + b.a[i][j];
	}




}
void  BoolMatrix::BoolMatrixRand(){
	int k;

	for (int i = 1; i <= 6; i++){
				for (int j = 1; j <= 6; j++){
			k = rand() % 2;
			if (k == 1){ a[i][j] = 1; }
			else a[i][j] = 0;
		}
	}

}
void BoolMatrix::BoolMatrixPrint(){
	for (int i = 1; i <= 6; i++){
		for (int j = 1; j <= 6; j++){
			if (a[i][j] == 1) { cout << "1 "; }
			else cout << "0 ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
}
void BoolMatrix::BoolMatrixProizvedenie(BoolMatrix b){

	int i, j, l;
	bool k = 0;
	for (i = 1; i <= 6; i++){
		for (j = 1; j <= 6; j++)

			for (int i2 = 1; i2 <= 6; i2++){

				k = k + (b.a[i][i2] * b.a[i2][j]);

			}
		a[i][j] = k;
	}

};
void BoolMatrix::BoolMatrixInvercia(){
	int i, j;
	for (i = 1; i <= 6; i++){
		for (j = 1; j <= 6; j++)
			if (a[i][j] == 1){ a[i][j] = 0; }
			else a[i][j] = 1;
	}



};
void BoolMatrix::BoolMatrixSkolkoEdinic(){
	int i, j, k = 0;
	for (i = 1; i <= 6; i++){
		for (j = 1; j <= 6; j++)
			if (a[i][j] == 1){ k++; }
	}
	cout << "В матрице " << k << " единиц" << endl;





}
void  BoolMatrix::BoolMatrixLekcika(){
	double q[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int q2[7] = { 0, 1, 2, 3, 4, 5, 6 };
	int i, j, k0 = 0;
	double k = -1, c;
	for (i = 1; i <= 6; i++){
		for (j = 1; j <= 6; j++){
			if (a[i][j] == 1){
				c = 1;

				for (int i3 = 1; i3 <= j; i3++){ c *= 0.1; }
				q[i] = q[i] + c;;
			}
		}
	}
	double n;
	int n2;
	for (i = 1; i <= 5; i++){
		for (j = (i + 1); j <= 6; j++)
		{
			if (q[i] > q[j]){
				n = q[j];
				q[j] = q[i];
				q[i] = n;
				n2 = q2[j];
				q2[j] = q2[i];
				q2[i] = n2;
			}

		}
	}
	int nom;
	for (i = 1; i <= 6; i++){

		nom = q2[i];
		for (j = 1; j <= 6; j++){

			cout << a[nom][j] << " ";
		}
		cout << endl;

	}
}
BoolMatrix::BoolMatrix(){}
BoolMatrix::~BoolMatrix(){};





