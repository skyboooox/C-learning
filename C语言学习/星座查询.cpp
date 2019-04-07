#include <stdio.h>
/*
m 月份
d 日期
水瓶座 m==1 &&d>=20||m==2 &&d<=18
双鱼座 m==2 &&d>=19||m==3 &&d<=20
白羊座 m==3 &&d>=21||m==4 &&d<=19
金牛座 m==4 &&d>=20||m==5 &&d<=20
双子座 m==5 &&d>=21||m==6 &&d<=21
巨蟹座 m==6 &&d>=22||m==7 &&d<=22
狮子座 m==7 &&d>=23||m==8 &&d<=22
处女座 m==8 &&d>=23||m==9 &&d<=22
天秤座 m==9 &&d>=23||m==10 &&d<=23
天蝎座 m==10 &&d>=25||m==11 &&d<=22
射手座 m==11 &&d>=23||m==12 &&d<=21
魔蝎座 m==12 &&d>=22||m==1 &&d<=19
*/
int main(int argc, char const *argv[])
{
	int m = 0, d = 0,a;
	while (1) {
		printf("\n\n\n\n        星座查询\n     输入  0  继续\n     输入  1  退出\n");
		scanf_s("%d", &a);
		if (a == 1) {
			return 0;
		}
		else{
	printf("请输入月份\n");
	scanf_s("%d", &m);
	printf("请输入日期\n");
	scanf_s("%d", &d);
	
		if (m == 1 && d >= 20 || m == 2 && d <= 18) {
			printf("水瓶座");
		}
		else if (m == 2 && d >= 19 || m == 3 && d <= 20) {
			printf("双鱼座");
		}
		else if (m == 3 && d >= 21 || m == 4 && d <= 19) {
			printf("白羊座");
		}
		else if (m == 4 && d >= 20 || m == 5 && d <= 20) {
			printf("金牛座");
		}
		else if (m == 5 && d >= 21 || m == 6 && d <= 21) {
			printf("双子座");
		}
		else if (m == 6 && d >= 22 || m == 7 && d <= 22) {
			printf("巨蟹座");
		}
		else if (m == 7 && d >= 23 || m == 8 && d <= 22) {
			printf("狮子座");
		}
		else if (m == 8 && d >= 23 || m == 9 && d <= 22) {
			printf("处女座");
		}
		else if (m == 9 && d >= 23 || m == 10 && d <= 23) {
			printf("天秤座");
		}
		else if (m == 10 && d >= 25 || m == 11 && d <= 22) {
			printf("天蝎座");
		}
		else if (m == 11 && d >= 23 || m == 12 && d <= 21) {
			printf("射手座");
		}
		else if (m == 12 && d >= 22 || m == 1 && d <= 19) {
			printf("魔蝎座");
			}
		} 
	}
}