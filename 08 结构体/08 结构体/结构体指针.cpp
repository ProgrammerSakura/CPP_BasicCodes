#include <iostream>
#include <string>

using namespace std;

//ѧ���ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

//��ʦ�ṹ�嶨��
struct teacher
{
	//��Ա�б�
	int id; //ְ�����
	string name;  //��ʦ����
	int age;   //��ʦ����
	struct student stu; //�ӽṹ�� ѧ��
};

void printStrudent(const student* s) {
	// s->age = 85;  // ���ɸ���
	cout << s->name << endl;
}

int main00() {
	student s = {"�", 20, 85};
	teacher t = {10, "����", 30, {"�", 20, 85}};
	teacher* p = &t;
	
	// p->stu->name�ᱨ��
	cout << p->stu.name << endl;  // ָ����ʽṹ��������"->"���ṹ�������������������'.'

	system("pause");
	return 0;
}