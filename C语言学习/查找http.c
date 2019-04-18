#include <stdio.h>
#include <stdlib.h>//随机数
#include <time.h>//调用时间
#include <math.h>//数学函数
#include <string.h>
#define MAXSIZE 84997

int main()
{
	FILE* fp1, * fp2;//,*fp2;//定义文件指针
	fopen_s(&fp1, "1.txt", "r");//打开根目录1.txt,只读

	if (NULL == fp1) { //以返回值fpl判断是否打开成功，如果为NULL表示失败
		printf("文件不存在 !\n");
		exit(0); //终止程序，stdlib .h头文件中
	}
	fopen_s(&fp2, "2.txt", "w");//创建写入序号 2.txt,只写
	char a[MAXSIZE];

	//char a[] = "12312235732573345656456734973545607";//准备 要搜索的 数组
	
	int xf[MAXSIZE];//存放 第一个 要搜索字符串位置 的数组
	int xl[MAXSIZE];
	int i = 0;//计数器

	while (!feof(fp1)) {//判断文档结尾 
		fgets(a, 1024, fp1);  //读取一行
		char* sf = strpbrk(a, 'tps:');
		char* sl = strpbrk(a, '"');
		while (sf != NULL) {
			xf[i] = sf - a;
			sf = strchr(sf + 1, 'tps:');
			i++;
		}
		i = 0;//初始化计数器
		while (sl != NULL) {
			xl[i] = sl - a;
			sl = strchr(sl + 1, '7');
			i++;
		}
	}
	int f = 0, l = 0;//f,第一个数.l,最后一个数
	i = 0;
print:
	f = xf[i];
	if (f < 0)//vs2019没有用到的数组元素是-858993460
		fclose(fp1); //关闭fpl指针对应文件（1.txt)的流
	fclose(fp2); //关闭fp2指针对应文件（2.txt)的流
		return 0;
	l = xl[i];
	while (l >= f)
	{
		printf("%c", a[f]);
		f++;
	}
	printf("\n");
	i++;
	if (f > 0)
		goto print;
}

