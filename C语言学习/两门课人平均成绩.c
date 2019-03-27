#include <stdio.h>
int main(){
	float a,b,n;
	printf("请输入两门课的成绩:");
	scanf("%f%f",&a,&b);
	n=(a+b)/2;
	printf("平均成绩是:%f\n",n);
	return 0; 
}
