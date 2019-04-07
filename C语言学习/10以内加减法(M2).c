#include <stdio.h>
#include <stdlib.h>//随机数
#include <time.h>//调用时间
#include <math.h>//数学函数

int main(int argc, char const* argv[])
{
	int a[100], b[100],x[100], i = 0,j;
	srand((unsigned)time(NULL));//用时间初始化随机数种子库,unsigned无符号型
	

	for (j=0;j<100;j++)
	{
		a[j] = rand() % 10;
		b[j] = rand() % 10;
		x[j] = rand() % 2;
	}


	while (i < 100) {
		
		
	
		switch (x) {
		case(0):
			if (a<b) 
				printf("(%d) %d-%d=%d\n",i+1, b, a,b-a);
			else
				printf("(%d)%d-%d=%d\n",i+1, a, b,a-b);
			break;
		case(1):
				printf("(%d)%d+%d=%d\n",i+1, a, b,a+b);
			break;
				   }

		i++;
	}

	return 0;
}