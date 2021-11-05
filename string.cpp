#include <iostream>
#include <string>
using namespace std;


/*****************************************************************************
* 字符串
******************************************************************************/

void str()
{
	string s1; // 默认初始化,s1 是一个空字符串
	string s2 = s1; // s2 是 s1 的副本
	string s3 = "hello!"; // s3 是该字符串字面值的副本
	string s4(10, 'c'); // s4 的内容是 cccccccccc

	cout << "s1:" << s1 << "\ns2:" << s2 << "\ns3:" << s3 << "\ns4:" << s4 << endl;

	bool isEmpty = s1.empty();// 为空返回 true
	unsigned int size = s3.size();// 字符串中字符的个数,返回的是一个无符号整数

	// string 对象会自动忽略开头的空白(即空格符,换行符,制表符等)并从第一个真正的字符开始读起
	// 知道遇到下一次空白为止
	string s5, s6;
	//cin >> s5 >> s6;
	//cout << s5 << s6 << endl;

	int punct = 0;
	// 字符串中的每个字符,char
	for (auto s : s3)
	{
		// 判断是否为标点符号
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
		// 将字符转换成大写
		s = toupper(s);
	}
	cout << s7 << endl;


	// 将第一个单词全部转化为大写
	string s8("hello world!");
	for (decltype(s8.size()) index = 0; index != s8.size() && !isspace(s8[index]); ++index)
	{
		s8[index] = toupper(s8[index]);
	}
	cout << s8 << endl;


}


/*****************************************************************************
* 整行输入
******************************************************************************/

void getLine()
{
	// 包含前后所有空格
	string line;
	getline(cin, line);
	cout << line << endl;
	cout << "size:" << line.size() << endl;
}