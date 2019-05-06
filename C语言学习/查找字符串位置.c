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
搜索一段字符串
从一个字符开始,到一个字符结束.输出中间一段.
*/
int main(int argc, char const* argv[]){
	char a[] = "aciuahkjhiuzxiuhaciuhkntrzx";//准备 要搜索的 数组
	char* sf = strstr(a, "ac");
	char* sl = strstr(a, "zx");
	int xf[MAXSIZE];//存放 第一个 要搜索字符串位置 的数组
	int xl[MAXSIZE];
	int i = 0;//计数器
	while (sf != NULL) {
		xf[i] = sf - a;
		sf = strstr(sf + 1, "ax");
		i++;
	}
	i = 0;//初始化计数器
	while (sl != NULL) {
		xl[i] = sl - a;
		sl = strstr(sl + 1, "zx");
		i++;
	}
	int f = 0, l = 0;//f,第一个数.l,最后一个数
	i = 0;
print:
	f = xf[i];
	if (f < 0)//vs2019没有用到的数组元素是-858993460
		return 0;
	l = xl[i];
	while (l >= f){
		printf("%c", a[f]);
		f++;
	}
	printf("\n");
	i++;
	if (f > 0)
		goto print;
}
