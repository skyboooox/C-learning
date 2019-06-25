#include "祖传头文件.h"
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
