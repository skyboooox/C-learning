#include "祖传头文件.h"

int main(int argc, char const* argv[]){
	int da_xie = 0,xiao_xie = 0,shu_zi = 0,qi_ta = 0;
	char a[MAXSIZE];
	scanf_s("%s", &a, MAXSIZE);
	for (unsigned  i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z'){
			da_xie++;
		}
		else if (a[i] >= 'A' && a[i] <= 'Z'){
			xiao_xie++;
		}
		else if (a[i] >= '0' && a[i] <= '9'){
			shu_zi++;
		}
		else{
			qi_ta++;
		}
	}
		printf("输入字符串为: %s\n", a);
		printf("小写字符%d个\n大写字符%d个\n数字字符%d个\n其他字符%d个\n", da_xie, xiao_xie, shu_zi, qi_ta);
	return 0;
}
