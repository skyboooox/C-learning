#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	do {
		int b = a % 10;
		printf("%d", b);
		a /= 10;
	} while (a > 0);
	return 0;
}
