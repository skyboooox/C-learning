#include<iostream>
int main() {
	char a;
	printf("ÇëÊäÈë×ÖÄ¸:");
	scanf_s("%c", &a);
	if (a <= 91)
	{
		a = a + 32;
			printf("¡ä´óĞ´:%c\n", a);
	}
	else
	{
		a = a - 32;
		printf("Ğ¡Ğ´:%c\n", a);
	}
	return 0;}
//zcj924

