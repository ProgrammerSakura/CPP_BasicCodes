#include <iostream>
#include <string>

using namespace std;

//ѧ���ṹ�嶨��
struct student
{
	//��Ա�б�
	string stu_name;  //����
	int score;    //����
};

//��ʦ�ṹ�嶨��
struct teacher
{
	string t_name;  //��ʦ����
	struct student stu[5]; //�ӽṹ�� ѧ��
};

// ��ֵ
void for_value(teacher t[], int len) {
	string seq = "ABCDE";
	for (int i = 0; i < len; i++) {
		t[i].t_name = "teacher_";
		t[i].t_name += seq[i];

		for (int j = 0; j < 5; j++) {
			t[i].stu[j].stu_name = "stu_";
			t[i].stu[j].stu_name += seq[i];
			int random = rand() % 61 + 40;
			t[i].stu[j].score = random;
		}
	}

}

//��ӡ������Ϣ
void printInfo(struct teacher t[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << t[i].t_name << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << t[i].stu[j].stu_name
				<< " ���Է�����" << t[i].stu[j].score << endl;
		}
	}
}

int main01() {
	teacher t[5];
	int len = sizeof(t) / sizeof(t[0]);
	//���������
	srand((unsigned int)time(NULL));

	for_value(t, len);
	printInfo(t, len);

	system("pause");
	return 0;
}