#include <iostream>
using namespace std;

/******************************************************************************
* 迭代器
******************************************************************************/
void iteratorPrint()
{
	string s("some string");
	if (s.begin() != s.end()) // 确保 s 非空
	{
		auto it = s.begin(); // it 表示 s 的第一个字符
		*it = toupper(*it); // 将当前字符改成大写模式
	}
	cout << s << endl;

	// 将第一个单词改为大写
	string s2("hello world");
	for (auto it = s2.begin(); it != s2.end() && !isspace(*it); ++it)
	{
		*it = toupper(*it);
	}
	cout << s2 << endl;
}