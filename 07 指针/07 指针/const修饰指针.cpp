#include <iostream>
using namespace std;

int main01()
{

    int a = 10;
    int b = 10;

    // ����ָ��
    const int* p1 = &a;
    // *p = 100;
    p1 = &b;

    // ָ�볣��
    int* const p2 = &a;
    // p2 = &b;
    *p2 = 100;

    const int* const p3 = &a;
     //p3 = &b;
     //* p3 = 12;

    system("pause");

    return 0;

}