#include <stdio.h>
#include <stdlib.h>//随机数
#include <time.h>//调用时间
#include <math.h>//数学函数
#include <string.h>
#define MAXSIZE 84997

//constexpr auto MAXSIZE = 854;//将宏转换为constexpr,这是什么玩意???

int main()
{
	char a[] = "1234567890123456789009876543211234567890";
	char* s;
	s = strchr(a, '3');
	int x[2];

	while (s != NULL) {
		for (int i = 0; i < 2; i++)
		{
			x[i] = s - a;
			s = strchr(s + 1, '7');
		}
		int f, l;//f,第一个数.l,最后一个数
		f = x[0];
		l = x[1];
		while (l >= f)
		{
			printf("%c", a[f]);
			f++;
		}
		printf("\n");
	}
	return 0;
}

