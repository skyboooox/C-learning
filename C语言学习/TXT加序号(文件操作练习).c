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
//constexpr auto MAXSIZE = 854;//将宏转换为constexpr,这是什么玩意???
/*
程序同目录下的1.txt文件(没有要手动创建)
为每一行添加一个序号
添加后的文件另存成 2.txt
*/
int main(int argc, char const* argv[]){
	FILE* fp1,*fp2;//,*fp2;//定义文件指针
	fopen_s(&fp1, "1.txt", "r");//打开根目录1.txt,只读

	if (NULL == fp1) { //以返回值fpl判断是否打开成功，如果为NULL表示失败
		printf("文件不存在 !\n");  
		exit(0); //终止程序，stdlib .h头文件中
	}
	fopen_s(&fp2, "2.txt", "w");//创建写入序号 2.txt,只写
	int i=0;
	char a[MAXSIZE];

	while (!feof(fp1)){//判断文档结尾 
		i++;//计数器
		fgets(a, 1024, fp1);  //读取一行
		fprintf(fp2,"%d.\n%s",i, a); //输出
	}

	fclose(fp1); //关闭fpl指针对应文件（1.txt)的流
	fclose(fp2); //关闭fp2指针对应文件（2.txt)的流
	return 0;
}
