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
用于随机出题,十以内的加减法.
文件b保存在源代码文件同一目录下.
VS2019最大题目数是84998,如果不能运行,更改宏处理 MAXSIZE


a+b=
分别,随机>>>a,随机>>>b,84999个,放入数组中
随机>>>x,switch判断正负号,84999个,放入数组
定义2个文件指针fp1>>>没有答案的题目,fp2>>>有答案的题目
i,题目总数
j,循环次数
*/
int main(int argc, char const* argv[]){
	int a[MAXSIZE], b[MAXSIZE], x[MAXSIZE], j, i;
	srand((unsigned)time(NULL));//用时间初始化随机数种子库,unsigned无符号型
	FILE* fp1, * fp2;
	//fp1 = fopen("1.txt", "w"); ????夹私货?fopen不让用????????
	fopen_s(&fp1, "没有答案的题目.txt", "w");
	fopen_s(&fp2, "有答案的题目.txt", "w");

	printf("请输入你要出多少道题目(最多84999),文件保存在程序目录下\n");
	scanf_s("%d", &i);
	if (i > MAXSIZE) {
		printf("输入错误");
		return 0;
	}
	else {
		for (j = 0; j < i; j++) {//生成随机数放进数组中
			a[j] = rand() % 10;
			b[j] = rand() % 10;
			x[j] = rand() % 2;
		}
		for (j = 0; j < i; j++) {//没有答案的题目
			switch (x[j]) {
			case(0):
				if (a[j] < b[j])
					fprintf(fp1, "(%d) %d-%d=\n", j + 1, b[j], a[j]);
				else
					fprintf(fp1, "(%d) %d-%d=\n", j + 1, a[j], b[j]);
				break;
			case(1):
				fprintf(fp1, "(%d) %d+%d=\n", j + 1, a[j], b[j]);
				break;
			}
		}
		for (j = 0; j < i; j++) {//有答案的题目
			switch (x[j]) {
			case(0):
				if (a[j] < b[j])
					fprintf(fp2, "(%d) %d-%d=%d\n", j + 1, b[j], a[j], b[j] - a[j]);
				else
					fprintf(fp2, "(%d) %d-%d=%d\n", j + 1, a[j], b[j], a[j] - b[j]);
				break;
			case(1):
				fprintf(fp2, "(%d) %d+%d=%d\n", j + 1, a[j], b[j], a[j] + b[j]);
				break;
			}
		}
		fclose(fp1);
		fclose(fp2);
		if (i > 100)
		{
			printf("你怕是让小学生累死哦!!");
		}
		printf("生成成功,快去逮个小学生试试!!!!");
		return 0;

	}
}
