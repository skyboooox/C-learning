#include <stdio.h>
int main() {
	int a;
	printf("������һ������");
	scanf_s("%d", &a);
	if (a % 2 == 0)
		printf("ż��");
	else
		printf("����");
	return 0;
}
