#include "祖传头文件.h"
int main(int argc, char const* argv[]) {

	FILE* fp;//定义文件指针
	fopen_s(&fp, "1.txt", "w");//打开根目录1.txt,只读

	for (int i = 0; i < 1000; ++i) {
		fprintf(fp, "%d\n", i); //输出
	}
	fclose(fp); //关闭fp指针对应文件（1.txt)的流
	return 0;
}
