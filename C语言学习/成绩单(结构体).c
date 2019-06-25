#include "祖传头文件.h"

struct Date {
	int years;
	int month;
	int day;
};

struct Student {
	int num;
	char name[20];
	char sex[4];
	int year;
	float computer;
	float english;
	float math;
	float music;
	struct Date birthday;
}	student1 = { 1,"令狐冲","男",1999,90,83,72,83,1981,6,6 },
	student2 = { 2,"林平之","男",1999,78,92,88,78,1980,7,7 },
	student3 = { 3,"岳灵珊","女",1999,89,72,98,66,1978,8,8 },
	student4 = { 4,"任盈盈","女",1999,78,95,87,90,1983,9,19 };

int main(int argc, char const* argv[]) {
	printf("学号\t姓 名\t性别\t入学时间\t计算机\t英语\t数学\t音乐\t出生日期\n");
	printf(" %d \t%s\t%s \t%   d\t\t%.2f\t%.2f\t%.2f\t%.2f\t%d.%d.%d\n", student1.num, student1.name, student1.sex, student1.year, student1.computer, student1.english, student1.math, student1.english, student1.birthday.years, student1.birthday.month, student1.birthday.day);
	printf(" %d \t%s\t%s \t%   d\t\t%.2f\t%.2f\t%.2f\t%.2f\t%d.%d.%d\n", student2.num, student2.name, student2.sex, student2.year, student2.computer, student2.english, student2.math, student2.english, student2.birthday.years, student2.birthday.month, student2.birthday.day);
	printf(" %d \t%s\t%s \t%   d\t\t%.2f\t%.2f\t%.2f\t%.2f\t%d.%d.%d\n", student3.num, student3.name, student3.sex, student3.year, student3.computer, student3.english, student3.math, student3.english, student3.birthday.years, student3.birthday.month, student3.birthday.day);
	printf(" %d \t%s\t%s \t%   d\t\t%.2f\t%.2f\t%.2f\t%.2f\t%d.%d.%d\n", student4.num, student4.name, student4.sex, student4.year, student4.computer, student4.english, student4.math, student4.english, student4.birthday.years, student4.birthday.month, student4.birthday.day);
	return 0;
}
