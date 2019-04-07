#include <stdio.h>
#include <stdlib.h>//随机数
#include <time.h>//调用时间
#include <math.h>//数学函数

int main(int argc, char const* argv[])
{
	int a[100], b[100], x[100], j;
	srand((unsigned)time(NULL));//用时间初始化随机数种子库,unsigned无符号型


	for (j = 0; j < 100; j++)
	{
		a[j] = rand() % 10;
		b[j] = rand() % 10;
		x[j] = rand() % 2;
	}
	for (j = 0; j < 100; j++)
	{
		switch (x[j]) {
		case(0):
			if (a[j] < b[j])
				printf("(%d) %d-%d=\n", j + 1, b[j], a[j]);
			else
				printf("(%d) %d-%d=\n", j + 1, a[j], b[j]);
			break;
		case(1):
			printf("(%d) %d+%d=\n", j + 1, a[j], b[j]);
			break;
		}
	}
	
	for (j = 0; j < 100; j++)
	{
		switch (x[j]) {
		case(0):
			if (a[j] < b[j])
				printf("(%d) %d-%d=%d\n", j + 1, b[j], a[j], b[j] - a[j]);
			else
				printf("(%d) %d-%d=%d\n", j + 1, a[j], b[j], a[j] - b[j]);
			break;
		case(1):
			printf("(%d) %d+%d=%d\n", j + 1, a[j], b[j], a[j] + b[j]);
			break;
		}
	}
	return 0;
}