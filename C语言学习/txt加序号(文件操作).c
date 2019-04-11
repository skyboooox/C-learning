#include <stdio.h>
#include <stdlib.h>//随机数
#include <time.h>//调用时间
#include <math.h>//数学函数
#define MAXSIZE 8544
//constexpr auto MAXSIZE = 854;//将宏转换为constexpr,这是什么玩意???


int main(int argc, char const* argv[])
{
	FILE* fp1;//,*fp2;//定义文件指针
	fopen_s(&fp1, "1.txt", "r");//打开根目录1.txt,只读
	
	if (NULL == fp1){ //以返回值fpl判断是否打开成功，如果为NULL表示失败
		printf("文件不存在 !\n");
		exit(0); //终止程序，stdlib .h头文件中
	}
	//fopen_s(&fp2, "1-.txt", "w");//创建写入序号 2.txt,只写
	int i;
	char a[MAXSIZE];

	
	for (i = 0; i < MAXSIZE; i++) {
		if (fgets(a,1000,fp1)!=NULL)
		{
			printf("%c\n", a[i]);
		}
			//fscanf_s(fp1, "%[^\n]", &a[i]);
			
	}
	


	fclose(fp1); //关闭fpl指针对应文件（1.txt)的流
	//fclose(fp2); //关闭fp2指针对应文件（1-.txt)的流
	return 0;
}