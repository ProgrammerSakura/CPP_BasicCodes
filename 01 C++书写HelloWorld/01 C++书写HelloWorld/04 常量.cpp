#include<iostream>
using namespace std;

/*
	常量一旦定义，则不可修改。
*/
// #define 定义宏常量，注意末尾没分号。
#define PI 3.14

// #define 定义const常量，注意末尾需要分号。
const int LEN = 10;

int main4() {

	cout << PI << endl;
	cout << LEN << endl;

	system("pause");

	return 0;
}