#include <stdio.h>
#include <stdlib.h>//随机数
#include <time.h>//调用时间
#include <math.h>//数学函数
#include <string.h>
#define MAXSIZE 84997

/*
搜索一段字符串
从一个字符开始,到一个字符结束.输出中间一段.
*/
int main()
{
	char a[] = "12312235732573345656456734973545607";//准备 要搜索的 数组
	char* sf = strchr(a, '3');
	char* sl = strchr(a, '7');
	int xf[MAXSIZE];//存放 第一个 要搜索字符串位置 的数组
	int xl[MAXSIZE];
	int i=0;//计数器
	while (sf != NULL) {
		xf[i] = sf - a;
		sf = strchr(sf + 1, '3');
		i++;
	}
	i = 0;//初始化计数器
	while (sl != NULL) {
		xl[i] = sl - a;
		sl = strchr(sl + 1, '7');
		i++;
	}
		int f=0, l=0;//f,第一个数.l,最后一个数
		i = 0;
		print:
			f = xf[i];
			if(f <0)//vs2019没有用到的数组元素是-858993460
				return 0;
			l = xl[i];
			while (l >= f)
			{
				printf("%c", a[f]);
				f++;
			}
			printf("\n");
			i++;
			if (f >0)
				goto print;
}

