#include <iostream>
using namespace std;

/******************************************************************************
* ������
******************************************************************************/
void iteratorPrint()
{
	string s("some string");
	if (s.begin() != s.end()) // ȷ�� s �ǿ�
	{
		auto it = s.begin(); // it ��ʾ s �ĵ�һ���ַ�
		*it = toupper(*it); // ����ǰ�ַ��ĳɴ�дģʽ
	}
	cout << s << endl;

	// ����һ�����ʸ�Ϊ��д
	string s2("hello world");
	for (auto it = s2.begin(); it != s2.end() && !isspace(*it); ++it)
	{
		*it = toupper(*it);
	}
	cout << s2 << endl;
}