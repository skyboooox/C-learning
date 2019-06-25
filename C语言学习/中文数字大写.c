#include "祖传头文件.h"
#define PI 3.1415926

int a(int x) {
	if (x == 1) {
		printf("元整");
	}if (x == 2||x==6||x==10) {
		printf("拾");
	}if (x == 3 || x == 7 || x == 11) {
		printf("佰");
	}if (x == 4 || x == 8||x == 12) {
		printf("千");
	}if (x == 5||x == 13) {
		printf("万");
	}if (x == 9) {
		printf("亿");
	}
}


int main(int argc, char const* argv[]){
	int count = 0; //count 数字位数
	unsigned long money;//最大3197704724
	int i = 0;
	int moneys[14];
	char unit[10][4] = { "零", "壹", "贰", "叁", "肆", "伍", "陆", "柒", "捌", "玖" };
	printf("请输入金额：");
	scanf_s("%uld", &money);
	int b = sizeof(money)/4;
	while (money != 0) {
		moneys[i] = money % 10;
		money /= 10; // 去掉最后一位
		i++;
		count++;
	}
	for (i = 0; i < count; i++) {
		int y = moneys[i];
		//if (y!=0) {
			printf("%s", unit[y]);
			int x = count - i;
			a(x);
		/*}if (y == 0) {
			printf("零");
		}*/
	}

	return 0;
}
