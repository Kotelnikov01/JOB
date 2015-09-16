
#include <iostream>
using namespace std;

class BoolMatrix{
private:
	bool a[7][7];

public:
	BoolMatrix();
	~BoolMatrix();
	void BoolMatrixSum(BoolMatrix);
	void  BoolMatrixRand();
	void BoolMatrixPrint();
	void BoolMatrixProizvedenie(BoolMatrix);
	void BoolMatrixInvercia();
	void BoolMatrixSkolkoEdinic();
	void BoolMatrixLekcika();
	
};