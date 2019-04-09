#include "stdio.h"
/*
am数组,存储每天上午的课程

二位数组??
*/
int main(int argc, char const* argv[])
{
	int x,y;
	char am[8][4] = { "我","我","我","我","我","我","我","\0" };
	char pm[8] = { 'b1','b2','b3','b4','b5','b6','b7','\0' };
	printf("请输入   上午>>>>0    下午>>>>1\n");
	scanf_s("%d", &x);
	if (x > 1) {
		printf("输入错误\n");
		return 0;
	}
	else {
		printf("请输入星期几(数字1~7)\n");
		scanf_s("%d", &y);
		if (y == 0 || y > 7)
		{
			printf("输入错误\n");
			return 0;
		}
		else {
			switch (x)
			{
			case(0):printf("%c", am[y]);
				break;
			case(1):printf("%c", pm[y]);
				break;
			}
		}
	}
	return 0;
}
//
