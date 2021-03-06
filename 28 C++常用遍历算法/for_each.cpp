//算法主要是由头文件<algorithm> <functional> <numeric>
//<algorithm>是所有STL头文件中最大的一个 范围涉及到比较、交换、查找、遍历操作、复制、修改等
//<numeric>体积很小 只包括几个在序列上面进行简单数学运算的模板函数
//<functional>定义了一些模板类 用以声明函数对象

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// - for_each(起始迭代器，结束迭代器，函数) 遍历容器
// for_each在实际开发中是最常用的遍历算法 需要熟练掌握

//普通函数
void print(int val)
{
	cout << val << " ";
}

//仿函数
class print2
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), print);
	cout << endl;

	for_each(v.begin(), v.end(), print2());
	cout << endl;
}

int main1()
{
	test01();

	system("pause");
	return 0;
}