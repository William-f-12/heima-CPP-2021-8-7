//概念：
// - 返回bool类型的仿函数称为谓词
// - 如果operator()接受一个参数 那么叫做一元谓词
// - 如果operator(0接受两个参数 娜姆叫做二元谓词

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class GreaterFive
{
public:
	bool operator()(int val)const
	{
		return val > 5;
	}
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找容器中有没有大于5的数组
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到了大于5的数字为：" << (*it) << endl;
	}
}

int main1()
{
	test01();

	system("pause");
	return 0;
}