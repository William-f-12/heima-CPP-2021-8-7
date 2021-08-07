#include<iostream>
#include<string>
using namespace std;

//string中单个字符存取方式有两种
// char& operator[](int n);
// char& at(int n);

void test06()
{
	string str = "hello";
	//通过[]访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	//通过at方式访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//修改单个字符
	str[0] = 'x';
	cout << "str = " << str << endl;
	str.at(1) = 'x';
	cout << "str = " << str << endl;
}

int main6()
{
	test06();

	system("pause");
	return 0;
}