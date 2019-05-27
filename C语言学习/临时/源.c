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
// 0>>退出 1>>加 2>>减 3>>乘 4>>除
int jia(int a,int b) {// 1>>加
	printf("%d", a + b);
}
int jian(int a, int b) {// 2>>减
	printf("%d", a - b);
}
int cheng(int a, int b) {// 3>>乘
	printf("%d", a * b);
}
int chu(int a, int b) {// 4>>除
	printf("%d", a / b);
}
int main(int argc, char const* argv[]) {
	int x, y, n;
	printf("请输入一个数字\n0>>退出 1>>加 2>>减 3>>乘 4>>除\n");
	scanf_s("%d", &n);
	
	switch (n) {
	case(0):
 		printf("退出");
		return 0;
		break;
	case(1):
		printf("请输入a+b=c的a与b\n");
		scanf_s("%d%d", &x, &y);
		jia(x,y); break;
	case(2):
		printf("请输入a+b=c的a与b\n");
		scanf_s("%d%d", &x, &y);
		jian(x,y); break;
	case(3):
		printf("请输入a+b=c的a与b\n");
		scanf_s("%d%d", &x, &y);
		cheng(x,y); break;
	case(4):
		printf("请输入a+b=c的a与b\n");
		scanf_s("%d%d", &x, &y);
		chu(x,y); break;
	default:
		printf("输入错误,请重新输入");
		break;
	}

}