#include "祖传头文件.h"
int isprime(int x)/*判断n是否为素数的函数*/
{
	int r = 1;
	if (x == 1||x!=2&&x%2==0) {
		r = 0;
	}
	for (int j = 3; j < x; j+=2) {
		if (x % j == 0)
		{
			r = 0;
			break;
		}
	}
	return r;
}
int main()
{
	int x, i;
	printf("请输入一个不小于6的偶数：\n");
	scanf_s("%d", &x);
	while (x < 6 || x % 2 != 0)
	{
		printf("您的输入有误，请重新输入：\n");
		scanf_s("%d", &x);
	}
	for (i = 3; i < (x / 2); i++)
	{
		if (isprime(i) != 0)
			if (isprime(x - i) != 0)
				printf("%d=%d+%d\n", x, i, x - i);

	}
}
