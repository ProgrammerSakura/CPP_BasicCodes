#include <iostream>
#include <string>

using namespace std;

//学生结构体定义
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//教师结构体定义
struct teacher
{
	//成员列表
	int id; //职工编号
	string name;  //教师姓名
	int age;   //教师年龄
	struct student stu; //子结构体 学生
};

void printStrudent(const student* s) {
	// s->age = 85;  // 不可更改
	cout << s->name << endl;
}

int main00() {
	student s = {"李华", 20, 85};
	teacher t = {10, "张三", 30, {"李华", 20, 85}};
	teacher* p = &t;
	
	// p->stu->name会报错
	cout << p->stu.name << endl;  // 指针访问结构体内容用"->"，结构体变量访问其属性则用'.'

	system("pause");
	return 0;
}