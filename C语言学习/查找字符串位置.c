#include "祖传头文件.h"

/*
搜索一段字符串
从一个字符开始,到一个字符结束.输出中间一段.
*/
int main(int argc, char const* argv[]){
	char a[] = "aciuahkjhiuzxiuhaciuhkntrzx";//准备 要搜索的 数组
	char* sf = strstr(a, "ac");
	char* sl = strstr(a, "zx");
	int xf[MAXSIZE];//存放 第一个 要搜索字符串位置 的数组
	int xl[MAXSIZE];
	int i = 0;//计数器
	while (sf != NULL) {
		xf[i] = sf - a;
		sf = strstr(sf + 1, "ax");
		i++;
	}
	i = 0;//初始化计数器
	while (sl != NULL) {
		xl[i] = sl - a;
		sl = strstr(sl + 1, "zx");
		i++;
	}
	int f = 0, l = 0;//f,第一个数.l,最后一个数
	i = 0;
print:
	f = xf[i];
	if (f < 0)//vs2019没有用到的数组元素是-858993460
		return 0;
	l = xl[i];
	while (l >= f){
		printf("%c", a[f]);
		f++;
	}
	printf("\n");
	i++;
	if (f > 0)
		goto print;
}
