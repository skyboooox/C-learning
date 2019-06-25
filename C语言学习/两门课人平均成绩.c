#include "祖传头文件.h"

int main(int argc, char const* argv[]){
	float a,b,n;
	printf("请输入两门课的成绩¨:");
	scanf("%f%f",&a,&b);
	n=(a+b)/2;//计算平均成绩
	printf("平均成绩是:%f\n",n);
	return 0;
}
