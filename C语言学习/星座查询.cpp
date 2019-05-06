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
m 月份
d 日期
水瓶座 m==1 &&d>=20||m==2 &&d<=18
双鱼座 m==2 &&d>=19||m==3 &&d<=20
白羊座 m==3 &&d>=21||m==4 &&d<=19
金牛座 m==4 &&d>=20||m==5 &&d<=20
双子座 m==5 &&d>=21||m==6 &&d<=21
巨蟹座 m==6 &&d>=22||m==7 &&d<=22
狮子座 m==7 &&d>=23||m==8 &&d<=22
处女座 m==8 &&d>=23||m==9 &&d<=22
天秤座 m==9 &&d>=23||m==10 &&d<=23
天蝎座 m==10 &&d>=25||m==11 &&d<=22
射手座 m==11 &&d>=23||m==12 &&d<=21
魔蝎座 m==12 &&d>=22||m==1 &&d<=19
*/
int main(int argc, char const *argv[])
{
	int m = 0, d = 0,a;
	while (1) {
		printf("\n\n\n\n        星座查询\n     输入  0  继续\n     输入  1  退出\n");
		scanf_s("%d", &a);
		if (a == 1) {
			return 0;
		}
		else{
	printf("请输入月份\n");
	scanf_s("%d", &m);
	printf("请输入日期\n");
	scanf_s("%d", &d);
	
		if (m == 1 && d >= 20 || m == 2 && d <= 18) {
			printf("水瓶座");
		}
		else if (m == 2 && d >= 19 || m == 3 && d <= 20) {
			printf("双鱼座");
		}
		else if (m == 3 && d >= 21 || m == 4 && d <= 19) {
			printf("白羊座");
		}
		else if (m == 4 && d >= 20 || m == 5 && d <= 20) {
			printf("金牛座");
		}
		else if (m == 5 && d >= 21 || m == 6 && d <= 21) {
			printf("双子座");
		}
		else if (m == 6 && d >= 22 || m == 7 && d <= 22) {
			printf("巨蟹座");
		}
		else if (m == 7 && d >= 23 || m == 8 && d <= 22) {
			printf("狮子座");
		}
		else if (m == 8 && d >= 23 || m == 9 && d <= 22) {
			printf("处女座");
		}
		else if (m == 9 && d >= 23 || m == 10 && d <= 23) {
			printf("天秤座");
		}
		else if (m == 10 && d >= 25 || m == 11 && d <= 22) {
			printf("天蝎座");
		}
		else if (m == 11 && d >= 23 || m == 12 && d <= 21) {
			printf("射手座");
		}
		else if (m == 12 && d >= 22 || m == 1 && d <= 19) {
			printf("魔蝎座");
			}
		} 
	}
}