#include <stdio.h>
#include <stdlib.h>//随机数
#include <time.h>//调用时间
#include <math.h>//数学函数
#define MAXSIZE 84998
//for循环
int main1(){
	int x = 1, i = 10;
	for (i; i > 1;i--)
	{
		 x=i*x;
		 printf("%d\n", x);
	}
	return 0;
} 
//do while循环
int main2(){
	int x = 1, i = 10;
	do{
		x = i * x;
		i--;
		printf("%d\n", x);
	} while (i>0);
	return 0;
}
//while 循环
int main3() {
	int x = 1, i = 10;
	while (i>1)
	{
		x = i * x;
		i--;
		printf("%d\n", x);
	}
	return 0;
}
//if goto循环
int main4() {
	int x = 1, i = 10;
abc:
	if (i > 0) {
		x = i * x;
		i--;
		printf("%d\n", x);
		goto abc;
	}
	else
		return 0;
}
