#include  <iostream>

using namespace std;

int main02() {
	int a = 10;
	int* p = NULL;  // ��ָ��

	// *p = 100; // ��ָ�벻�ɽ��з���

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