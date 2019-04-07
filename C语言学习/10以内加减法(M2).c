#include <stdio.h>
#include <stdlib.h>//随机数
#include <time.h>//调用时间
#include <math.h>//数学函数

int main(int argc, char const* argv[])
{
	int i;
	printf("请输入你要出多少道题目,文件保存在程序目录下\n");
	scanf_s("%d", &i);

	
	int a[10000], b[10000], x[10000], j;
	srand((unsigned)time(NULL));//用时间初始化随机数种子库,unsigned无符号型
	FILE* fp1,*fp2;
	//fp1 = fopen("1.txt", "w"); ????夹私货?fopen不让用????????
	fopen_s(&fp1, "没有答案的题目.txt", "w");
	fopen_s(&fp2, "有答案的题目.txt", "w");

	for (j = 0; j < i; j++)//生成随机数放进数组中
	{
		a[j] = rand() % 10;
		b[j] = rand() % 10;
		x[j] = rand() % 2;
	}
	for (j = 0; j < i; j++)//没有答案的题目
	{
	
		switch (x[j]) {
		case(0):
			if (a[j] < b[j])
				fprintf(fp1, "(%d) %d-%d=\n", j + 1, b[j], a[j]);
			else
				fprintf(fp1, "(%d) %d-%d=\n", j + 1, a[j], b[j]);
			break;
		case(1):
			fprintf(fp1, "(%d) %d+%d=\n", j + 1, a[j], b[j]);
			break;
		
		}
	}
	
	for (j = 0; j < i; j++)//有答案的题目
	{
		
		switch (x[j]) {
		case(0):
			if (a[j] < b[j])
				fprintf(fp2, "(%d) %d-%d=%d\n", j + 1, b[j], a[j], b[j] - a[j]);
			else
				fprintf(fp2, "(%d) %d-%d=%d\n", j + 1, a[j], b[j], a[j] - b[j]);
			break;
		case(1):
			fprintf(fp2, "(%d) %d+%d=%d\n", j + 1, a[j], b[j], a[j] + b[j]);
			break;
		
		}
	}
	fclose(fp1);
	fclose(fp2);
	if (i > 100)
		printf("你怕是让小学生累死哦!!");
	return 0;
}