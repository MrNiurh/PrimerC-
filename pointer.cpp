#include <iostream>
using namespace std;


/*****************************************************************************
* 指针
*
******************************************************************************/
void pointer()
{

	int ival = 42;
	int* p = &ival; // p 存放变量 ival 的地址，或者说 p 是指向变量 ival 的指针
	*p = 99;
	cout << "*p:" << *p << " ival:" << ival << endl;

	int** q = &p;
	cout << "*q:" << *q << " **q:" << **q << endl;

	// 空指针
	int* p1 = nullptr; // 等价于 int *p1=0
	int* p2 = 0;

	int* p3 = NULL; // 等价于 int *p3=0
}

