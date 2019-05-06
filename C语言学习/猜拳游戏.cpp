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

与电脑进行猜拳游戏

石头=>0
剪刀=>1
布 =>2
退出=>3
*/
int main(int argc, char const* argv[]) {
	//char i[4] = { '石头', '剪刀', '布', '\0' };//将几个名称放入数组中方便读取,md不会,放弃
	int wanjia,computer;
	while(1){
		printf("      猜拳游戏\n*输入数字,按回车继续*\n     0==>石头\n     1==>剪刀\n     2==>布\n\n     3==>退出\n");
		//读取玩家
		scanf_s("%d", &wanjia);
		if (wanjia == 3) //输入3退出循环
			break;
		printf("\n你出了====>");
		switch (wanjia)
		{
		case 0:printf("石头\n");
			break;
		case 1:printf("剪刀\n");
			break;
		case 2:printf("布 \n");
			break;
		}
		//计算电脑
		srand((unsigned)time(NULL));
		computer = rand() % 3;
		printf("电脑出了==>");
		switch (computer)
		{
		case 0:printf("石头\n");
			break;
		case 1:printf("剪刀\n");
			break;
		case 2:printf("布 \n");
			break;
		}
		//计算输赢
		if (wanjia == computer) {
			printf("\n     平局\n\n\n");
		}
		else if (wanjia == 0 && computer == 1 || wanjia == 1 && computer == 2 || wanjia == 2 && computer == 0) {
			printf("\n     你赢了\n\n\n");
		}
		else if (wanjia == 1 && computer == 0 || wanjia == 2 && computer == 1 || wanjia == 0 && computer == 2) {
			printf("\n      你输了\n\n\n");
		}
	} 
	return 0;
}