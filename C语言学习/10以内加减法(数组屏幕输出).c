#include "祖传头文件.h"
/*
用于随机出题,十以内的加减法.
文件b保存在源代码文件同一目录下.
VS2019最大题目数是84998,如果不能运行,更改宏处理 MAXSIZE


a+b=
分别,随机>>>a,随机>>>b,84999个,放入数组中
随机>>>x,switch判断正负号,84999个,放入数组

i,题目总数
j,循环次数
*/
int main(int argc, char const* argv[])
{
	int a, b,x, i = 0;
	srand((unsigned)time(NULL));//用时间初始化随机数种子库,unsigned无符号型

	while (i < 100) {
		i++;
		a = rand() % 10;
		b = rand() % 10;
		x = rand() % 2;

		switch (x) {
		case(0):
			if (a<b)
				printf("(%d) %d-%d=%d\n",i, b, a,b-a);
			else
				printf("(%d)%d-%d=%d\n",i, a, b,a-b);
			break;
		case(1):
				printf("(%d)%d+%d=%d\n",i, a, b,a+b);
			break;
				   }
	}

	return 0;
}
