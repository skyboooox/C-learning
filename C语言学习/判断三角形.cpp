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
是否构成三角形a+b>c,a+c>b,b+c>c
等边三角形 a=b=c
等腰a=b或a=c或b=c
直角a2+b2=c2或a2+c2=b2或b2+c2=a2
*/
int main(int argc, char const* argv[]){
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
		if (a + b > c&&a + c > b&&b + c > a) {
			if (a == b && a == c && b == c) {
			printf("等边三角形");
			}
			else if (a == b || a == c || b == c) {
			printf("等腰");
				}
				else if (a*a + b * b == c * c || a * a + c * c == b * b || b * b + c * b == a * a) {
			printf("直角");
				}
				else {
				printf("不是特殊三角形");
			}
		}
		else{
		printf("不构成三角形");
	}
	return 0;
}