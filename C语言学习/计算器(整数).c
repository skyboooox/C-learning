#include "祖传头文件.h"
// 0>>退出 1>>加 2>>减 3>>乘 4>>除
int jia(int a,int b) {// 1>>加
	printf("%d", a + b);
}
int jian(int a, int b) {// 2>>减
	printf("%d", a - b);
}
int cheng(int a, int b) {// 3>>乘
	printf("%d", a * b);
}
int chu(int a, int b) {// 4>>除
	printf("%d", a / b);
}
int main(int argc, char const* argv[]) {
	int x, y, n;
	printf("请输入一个数字\n0>>退出 1>>加 2>>减 3>>乘 4>>除\n");
	scanf_s("%d", &n);

	switch (n) {
	case(0):
 		printf("退出");
		return 0;
		break;
	case(1):
		printf("请输入a+b=c的a与b\n");
		scanf_s("%d%d", &x, &y);
		jia(x,y); break;
	case(2):
		printf("请输入a+b=c的a与b\n");
		scanf_s("%d%d", &x, &y);
		jian(x,y); break;
	case(3):
		printf("请输入a+b=c的a与b\n");
		scanf_s("%d%d", &x, &y);
		cheng(x,y); break;
	case(4):
		printf("请输入a+b=c的a与b\n");
		scanf_s("%d%d", &x, &y);
		chu(x,y); break;
	default:
		printf("输入错误,请重新输入");
		break;
	}

}
