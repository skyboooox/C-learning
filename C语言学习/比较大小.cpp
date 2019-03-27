#include <stdio.h> 
int main(){
	float a,b,c,zuida;
	printf("请输入三个数字");
	scanf_s("%f%f%f", &a, &b, &c);
	
	zuida = a>b ? a:b;
	zuida = c>zuida ? c:zuida;
	
	printf("%f\n%f\n%f\n", zuida,b,a);
	
	return 0; 
}
//zcj924