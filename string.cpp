#include <iostream>
#include <string>
using namespace std;


/*****************************************************************************
* �ַ���
******************************************************************************/

void str()
{
	string s1; // Ĭ�ϳ�ʼ��,s1 ��һ�����ַ���
	string s2 = s1; // s2 �� s1 �ĸ���
	string s3 = "hello!"; // s3 �Ǹ��ַ�������ֵ�ĸ���
	string s4(10, 'c'); // s4 �������� cccccccccc

	cout << "s1:" << s1 << "\ns2:" << s2 << "\ns3:" << s3 << "\ns4:" << s4 << endl;

	bool isEmpty = s1.empty();// Ϊ�շ��� true
	unsigned int size = s3.size();// �ַ������ַ��ĸ���,���ص���һ���޷�������

	// string ������Զ����Կ�ͷ�Ŀհ�(���ո��,���з�,�Ʊ����)���ӵ�һ���������ַ���ʼ����
	// ֪��������һ�οհ�Ϊֹ
	string s5, s6;
	//cin >> s5 >> s6;
	//cout << s5 << s6 << endl;

	int punct = 0;
	// �ַ����е�ÿ���ַ�,char
	for (auto s : s3)
	{
		// �ж��Ƿ�Ϊ������
		if (ispunct(s))
		{
			punct++;
		}
		cout << s << " ";
	}
	cout << endl;

	string s7("hello world!");
	for (auto& s : s7)
	{
		// ���ַ�ת���ɴ�д
		s = toupper(s);
	}
	cout << s7 << endl;


	// ����һ������ȫ��ת��Ϊ��д
	string s8("hello world!");
	for (decltype(s8.size()) index = 0; index != s8.size() && !isspace(s8[index]); ++index)
	{
		s8[index] = toupper(s8[index]);
	}
	cout << s8 << endl;


}


/*****************************************************************************
* ��������
******************************************************************************/

void getLine()
{
	// ����ǰ�����пո�
	string line;
	getline(cin, line);
	cout << line << endl;
	cout << "size:" << line.size() << endl;
}