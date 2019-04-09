#include <stdio.h>
#include <stdlib.h>//随机数
#include <time.h>//可得到当前的时间（精确到秒）
#include <math.h>//数学函数

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
