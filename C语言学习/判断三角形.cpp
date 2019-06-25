#include "祖传头文件.h"
/*
是否构成三角形a+b>c,a+c>b,b+c>c
等边三角形 a=b=c
等腰a=b或a=c或b=c
直角a2+b2=c2或a2+c2=b2或b2+c2=a2
*/
int main(int argc, char const* argv[]){
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
		if (a + b > c&&a + c > b&&b + c > a) {
			if (a == b && a == c && b == c) {
			printf("等边三角形");
			}
			else if (a == b || a == c || b == c) {
			printf("等腰");
				}
				else if (a*a + b * b == c * c || a * a + c * c == b * b || b * b + c * b == a * a) {
			printf("直角");
				}
				else {
				printf("不是特殊三角形");
			}
		}
		else{
		printf("不构成三角形");
	}
	return 0;
}
