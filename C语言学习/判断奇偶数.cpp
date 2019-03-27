#include <stdio.h>
int main() {
	int a;
	printf("请输入一个整数");
	scanf_s("%d", &a);
	if (a % 2 == 0)
		printf("偶数");
	else
		printf("奇数");
	return 0;
}
