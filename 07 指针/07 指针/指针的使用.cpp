#include  <iostream>

using namespace std;

int main02() {
	int a = 10;
	int* p = NULL;  // 空指针

	// *p = 100; // 空指针不可进行访问

	p = &a;

	cout << "a: " << a << endl;
	cout << "*p: " << *p << endl;
	*p = 100;
	cout << "*p = 100: " << *p << endl;
	cout << "a: " << a << endl;

	int* invalid_p = (int*)0x1100;
	cout << *invalid_p << endl;

	system("pause");

	return 0;
}