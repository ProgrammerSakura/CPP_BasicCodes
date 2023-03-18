#include <iostream>
#include <string>

using namespace std;

//学生结构体定义
struct student
{
	//成员列表
	string stu_name;  //姓名
	int score;    //分数
};

//教师结构体定义
struct teacher
{
	string t_name;  //教师姓名
	struct student stu[5]; //子结构体 学生
};

// 赋值
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

//打印所有信息
void printInfo(struct teacher t[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << t[i].t_name << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << t[i].stu[j].stu_name
				<< " 考试分数：" << t[i].stu[j].score << endl;
		}
	}
}

int main01() {
	teacher t[5];
	int len = sizeof(t) / sizeof(t[0]);
	//随机数种子
	srand((unsigned int)time(NULL));

	for_value(t, len);
	printInfo(t, len);

	system("pause");
	return 0;
}