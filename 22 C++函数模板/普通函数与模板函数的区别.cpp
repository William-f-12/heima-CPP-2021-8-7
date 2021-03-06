#include<iostream>
using namespace std;

//普通函数与函数模板区别：
// - 普通函数调用时可以发生自动类型转换（隐式类型转换）
// - 函数模板调用时 如果利用自动类型推导 不会发生隐式类型转换
// - 如果利用显示指定类型的方式 可以发生隐式类型转换

//普通函数
int myAdd01(int a, int b)
{
	return a + b;
}

//函数模板
template<typename T>
int myAdd02(T a, T b)
{
	return a + b;
}

int main3()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd01(a, c) << endl;
	// cout << myAdd02(a, c) << endl; 错误 无妨确定转换哪个类型 无法发生隐式类型转换
	cout << myAdd02<int>(a, c) << endl; //显示指定类型 可以发生转换

	//建议使用显示指定类型方式调用函数模板

	system("pause");
	return 0;
}