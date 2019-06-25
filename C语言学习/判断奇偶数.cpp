#include "祖传头文件.h"

int main(int argc, char const* argv[]){
	int a;
	printf("请输入一个整数");
	scanf_s("%d", &a);
	if (a % 2 == 0)
		printf("偶数");
	else
		printf("奇数");
	return 0;
}
