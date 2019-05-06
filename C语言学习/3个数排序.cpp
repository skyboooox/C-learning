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
输入三个数字(空格隔开),对三个数字从小到大排序后输出.
*/
int main(int argc, char const* argv[]){
    int x,y,z;
    printf("请输入三个数字");
    scanf_s("%d%d%d",&x,&y,&z);
    if(x<y){
        int zuida=x;
        x=y;
        y=zuida;
    }
    if(x<z){
        int zuida =x;
        x=z;
        z=zuida;
    }  
    if(y<z){
        int zuida =y;
        y=z;
        z=zuida;
    }
    printf("顺序\n %d\n %d\n %d\n",x,y,z);
}
//
