#include <stdio.h>
#include <stdlib.h>//随机数
#include <time.h>//调用时间
#include <math.h>//数学函数
#include <string.h>//字符串
#define MAXSIZE 84997

/*
搜索一段字符串
从一个字符开始,到一个字符结束.输出中间一段.
*/
int main()
{
	FILE* fp1;//定义文件指针
	fopen_s(&fp1, "1.txt", "r");//打开根目录1.txt,只读
	char a[MAXSIZE];
	char* sf = strstr(a, "http");
	char* sl = strstr(a, ">/");
	int xf[MAXSIZE];//存放 第一个 要搜索字符串位置 的数组
	int xl[MAXSIZE];

	if (NULL == fp1) { //以返回值fpl判断是否打开成功，如果为NULL表示失败
		printf("文件不存在 !\n");
		exit(0); //终止程序，stdlib .h头文件中
	}
	do
	{

		fgets(a, 1024, fp1);  //读取一行
		printf("%s", a); //输出

		int i = 0;//计数器

		do
		{
			xf[i] = sf - a;
			sf = strstr(sf + 1, "http");
			i++;
		} while (sf != NULL);

		do
		{
			xl[i] = sl - a;
			sl = strstr(sl + 1, ">/");
			i++;
		} while (sl != NULL);

		int f = 0, l = 0;//f,第一个数.l,最后一个数
		i = 0;
	print:
		f = xf[i];
		if (f < 0)//vs2019没有用到的数组元素是-858993460
			return 0;
		l = xl[i];
		do
		{
			printf("%c", a[f]);
			f++;
		} while (l >= f);

		printf("\n");
		i++;
		if (f > 0)
			goto print;

	} while (!feof(fp1));//判断文档结尾
	fclose(fp1); //关闭fpl指针对应文件（1.txt)的流
	return 0;
}
