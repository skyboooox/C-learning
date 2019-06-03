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
#define PI 3.1415926 

int a(int x) {
	if (x == 1) {
		printf("元整");
	}if (x == 2||x==6||x==10) {
		printf("拾");
	}if (x == 3 || x == 7 || x == 11) {
		printf("佰");
	}if (x == 4 || x == 8||x == 12) {
		printf("千");
	}if (x == 5||x == 13) {
		printf("万");
	}if (x == 9) {
		printf("亿");
	}
}


int main(int argc, char const* argv[]){
	int count = 0; //count 数字位数
	unsigned long money;//最大3197704724
	int i = 0;
	int moneys[14];
	char unit[10][4] = { "零", "壹", "贰", "叁", "肆", "伍", "陆", "柒", "捌", "玖" };
	printf("请输入金额：");
	scanf_s("%uld", &money);
	int b = sizeof(money)/4;
	while (money != 0) {
		moneys[i] = money % 10;
		money /= 10; // 去掉最后一位
		i++;
		count++;
	}
	for (i = 0; i < count; i++) {
		int y = moneys[i];
		//if (y!=0) {
			printf("%s", unit[y]);
			int x = count - i;
			a(x);
		/*}if (y == 0) {
			printf("零");
		}*/
	}

	return 0;
}

