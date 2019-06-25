#include "祖传头文件.h"

int main(int argc, char const* argv[]){
	char a;
	printf("请输入字母:");
	scanf_s("%c", &a);
	if (a <= 91){
		a = a + 32;
			printf("′大写:%c\n", a);
	}
	else{
		a = a - 32;
		printf("小写:%c\n", a);
	}
	return 0;
}
