#include<iostream>
int main() {
	char a;
	printf("��������ĸ:");
	scanf_s("%c", &a);
	if (a <= 91)
	{
		a = a + 32;
			printf("���д:%c\n", a);
	}
	else
	{
		a = a - 32;
		printf("Сд:%c\n", a);
	}
	return 0;}
//zcj924

