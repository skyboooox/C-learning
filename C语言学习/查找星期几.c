#include "祖传头文件.h"

int days(int month, int day) {
	int i, days = 0;
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	for (i = month - 2; i >= 0; i--) {
		day = a[i];
		days += day;
	}
	return days;
}
int main(int argc, char const* argv[]) {
	printf("请输入月日");
	int month, day;
	scanf_s("%d%d", &month, &day);
	day = day + days(month, day);
	printf("第%d天\t", day);
	char w[8][7] = { "(+_+)/","星期一","星期二","星期三","星期四","星期五","星期六","星期天" };
	printf("%s", w[day%7+1]);
	return 0;
}
