//祖传头文件
#include <assert.h>//防御式编程
#include <ctype.h>//检测和转换单个字
#include <errno.h>//错误代码有关
#include <float.h>//浮点值相关的依赖于平台的常量
#include <limits.h>//各种变量类型的各种属性
#include <locale.h>//特定地域的设置，比如日期格式和货币符号
#include <math.h>//数学函数,所有 double 类型的参数
#include <setjmp.h>//存储宏 setjmp() 和函数 longjmp() 
#include <signal.h>//变量类型 sig_atomic_t、两个函数调用和一些宏来处理程序执行期间报告的不同信号。
#include <stdarg.h>//一个变量类型 va_list 和三个宏，这三个宏可用于在参数个数未知（即参数个数可变）时获取函数中的参数。
#include <stddef.h>//
#include <stdio.h>//各种函数来执行输入和输出
#include <stdlib.h>//四个变量类型、一些宏和各种通用工具函数
#include <string.h>//字符串
#include <time.h>//操作日期和时间
#define MAXSIZE 84998//定义最大个数(VS2019通过测试)
int isprime(int x)/*判断n是否为素数的函数*/
{
	int r;
	for (int j = 2; j < x; j++)
		if (x % j == 0)
		{
			r = 0;
			break;
		}
		else
			r = 1;
	return(r);
}
int main()
{
	int x, i;
	printf("请输入一个不小于6的偶数：\n");
	scanf_s("%d", &x);
	while (x < 6 || x % 2 != 0)
	{
		printf("您的输入有误，请重新输入：\n");
		scanf_s("%d", &x);
	}
	for (i = 3; i < (x / 2); i++)
	{
		if (isprime(i) != 0)
			if (isprime(x - i) != 0)
				printf("%d=%d+%d\n", x, i, x - i);

	}
}
