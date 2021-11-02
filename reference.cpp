#include <iostream>
using namespace std;


/*****************************************************************************
* ÒýÓÃ
*
******************************************************************************/
void reference() {
	int ival = 1024;
	int& refVal = ival;
	ival++;

	cout << refVal << endl;
};