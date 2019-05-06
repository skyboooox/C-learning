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
//for循环
int main(int argc, char const* argv[]){
	int x = 1, i = 10;
	for (i; i > 1;i--){
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
	while (i>1){
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
