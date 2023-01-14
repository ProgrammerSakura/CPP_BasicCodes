#include <iostream>

using namespace std;

/*
	标识符命名规则
		* 标识符不能是关键字
		* 标识符只能由字母、数字、下划线组成
		* 第一个字符必须为字母或下划线
		* 标识符中字母区分大小写
*/

int main5() {

	// 变量创建的语法：数据类型 变量名 = 变量初始值
	int a = 10;
	// 标识符不能是关键字
	// int double = 10; // xx

	// 标识符只能由字母、数字、下划线组成
	//int _123bc;

	// 第一个字符必须为字母或下划线
	//int _a, 12bc;

	// 标识符中字母区分大小写
	int a, A;


	cout << "变量a的值为：" << a << endl;

	system("pause");

	return 0;
}