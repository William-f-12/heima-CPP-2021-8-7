#include<iostream>
using namespace std;

//构造函数：主要作用于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用 无需手动调用
//析构函数：主要作用于对象销毁前系统自动调用 执行一些清理工作

//构造函数语法：类名() {}
// 1. 构造函数没有返回值也不写void
// 2. 函数名称与类名相同
// 3. 构造函数可以有参数 因此可以发生重载
// 4. 程序在调用对象时会自动调用构造 无需手动调用 且只会调用一次

//析构函数语法：~类名() {}
// 1. 析构函数没有返回值也不写void
// 2. 函数名称与类名相同 在名称前加上符号~
// 3. 析构函数不可以有参数 因此不可以发生重载
// 4. 程序在对象销毁前会自动调用构造 无需手动调用 且只会调用一次


class Person1
{
public:
	Person1() //构造函数
	{
		cout << "构造函数的调用" << endl;
	}

	~Person1() //析构函数
	{
		cout << "析构函数的调用" << endl;
	}
};

//构造和析构都是必须有的实现 如果我们自己不提供 编译器会提供空实现的构造和析构
void test01()
{
	Person1 p; //栈上的数据 test01执行完毕后 释放这个对象
}

int main1()
{
	test01();

	system("pause");

	return 0;
}