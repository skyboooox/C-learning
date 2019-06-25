#include "祖传头文件.h"
#define PI 3.1415926
int main(int argc, char const* argv[]){
	float r,l,s;
	printf("r=");
	scanf(" %f" ,&r);
	l=2*PI*r;
	s=PI*r*r;
	printf("%f,%f\n",l,s);
	return 0;
}
