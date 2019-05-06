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

//输入一串字符,统计输入的类型(大写,小写,数字)

int main(int argc, char const* argv[]){
	int da_xie = 0,xiao_xie = 0,shu_zi = 0,qi_ta = 0;
	char a[MAXSIZE];
	scanf_s("%s", &a, MAXSIZE);
	for (unsigned  i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z'){
			da_xie++;
		}
		else if (a[i] >= 'A' && a[i] <= 'Z'){
			xiao_xie++;
		}
		else if (a[i] >= '0' && a[i] <= '9'){
			shu_zi++;
		}
		else{
			qi_ta++;
		}
	}
		printf("输入字符串为: %s\n", a);
		printf("小写字符%d个\n大写字符%d个\n数字字符%d个\n其他字符%d个\n", da_xie, xiao_xie, shu_zi, qi_ta);
	return 0;
}