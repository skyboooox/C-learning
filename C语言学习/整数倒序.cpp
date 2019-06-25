#include "祖传头文件.h"
int main(int argc, char const* argv[]){
	int a;
	scanf("%d", &a);
	do {
		int b = a % 10;
		printf("%d", b);
		a /= 10;
	} while (a > 0);
	return 0;
}
