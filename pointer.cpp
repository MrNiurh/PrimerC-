#include <iostream>
using namespace std;


/*****************************************************************************
* ָ��
*
******************************************************************************/
void pointer()
{

	int ival = 42;
	int* p = &ival; // p ��ű��� ival �ĵ�ַ������˵ p ��ָ����� ival ��ָ��
	*p = 99;
	cout << "*p:" << *p << " ival:" << ival << endl;

	int** q = &p;
	cout << "*q:" << *q << " **q:" << **q << endl;

	// ��ָ��
	int* p1 = nullptr; // �ȼ��� int *p1=0
	int* p2 = 0;

	int* p3 = NULL; // �ȼ��� int *p3=0
}

