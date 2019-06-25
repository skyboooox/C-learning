#include "祖传头文件.h"
// 0>>退出 1>>加 2>>减 3>>乘 4>>除
float jia(float a, float b) {// 1>>加
	return a + b;
}
float jian(float a, float b) {// 2>>减
	return a - b;
}
float cheng(float a, float b) {// 3>>乘
	return a - b;
}
float chu(float a, float b) {// 4>>除
	return a / b;
}
int main(int argc, char const* argv[]) {
	float x = 0, y = 0, c = 0;
	int n = 1;
	while (n) {
		printf("请输入一个数字\n0>>退出 1>>加 2>>减 3>>乘 4>>除\n");
		scanf_s("%d", &n);
		if (n >= 1 && n <= 4) {
			printf("请输入a+b=c的a与b\n");
			scanf_s("%f%f", &x, &y);
		}
		switch (n) {
		case(0):
			printf("退出");	break;
		case(1):
			printf("%f\n", c = jia(x, y)); break;
		case(2):
			printf("%f\n", c = jian(x, y)); break;
		case(3):
			printf("%f\n", c = cheng(x, y)); break;
		case(4):
			if (y == 0) {
				printf("除数不能为0\n");
			}
			else {
				printf("%f\n", c = chu(x, y));
				break;
			}
		default:
			printf("输入错误,请重新输入\n");
			break;
		}
	}
	return 0;
}
