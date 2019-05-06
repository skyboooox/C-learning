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
/*
电脑和用户分别随机5个数字
累加后最大的获胜
*/
int main(int argc, char const* argv[]){
	printf("欢迎,本游戏为每次和电脑随机抽数字,5回合后最大的为胜利方\n\n");
	
	printf("请输入你的名字,1个字\n");
	char name;
	scanf_s("%c", &name);
	printf("你的名字是%c,开始游戏\n",name);
	//生成随机数
	int a1,a2,a3,a4,a5,b1,b2,b3,b4,b5;
	srand((unsigned)time(NULL));
		a1 = rand() % 10;
		a2 = rand() % 10;
		a3 = rand() % 10;
		a4 = rand() % 10;
		a5 = rand() % 10;

		b1 = rand() % 10;
		b2 = rand() % 10;
		b3 = rand() % 10;
		b4 = rand() % 10;
		b5 = rand() % 10;
	//计算每回合
	int c2, d2;//c,电脑总数.d用户总数
		c2 = a1 + a2;
		d2 = b1 + b2;
	int c3, d3;
		c3 = c2 + a3;
		d3 = d2 + a3;
	int c4, d4;
		c4 = c3 + a4;
		d4 = d3 + a4;
	int c5, d5;
		c5 = c4 + a5;
		d5 = d4 + a5;

	//1回合
	printf("\n第 1 回合:\n");
	printf("电脑:"); 
	printf("%d",a1); 
	printf("\n");
	printf("%c:",name);
	printf("%d", b1);

	//2回合
	printf("\n\n第 2 回合:\n");
	printf("电脑:");
	printf("%d", c2);
	printf("\n");
	printf("%c:", name);
	printf("%d", d2);

	//3回合
	printf("\n\n第 3 回合:\n");
	printf("电脑:");
	printf("%d", c3);
	printf("\n");
	printf("%c:", name);
	printf("%d", d3);

	//4回合
	printf("\n\n第 4 回合:\n");
	printf("电脑:");
	printf("%d", c4);
	printf("\n");
	printf("%c:", name);
	printf("%d", d4);

	//5回合
	printf("\n\n第 5 回合:\n");
	printf("电脑:");
	printf("%d", c5);
	printf("\n");
	printf("%c:", name);
	printf("%d", d5);
	if (c5 < d5)
		printf("\n\n你赢了");
	else
		printf("\n\n你输了");
	return 0;
}
