#include <stdio.h>
#include <stdlib.h>//�����
#include <time.h>//����ʱ��
#include <math.h>//��ѧ����
/*
�Ƿ񹹳�������a+b>c,a+c>b,b+c>c
�ȱ������� a=b=c
����a=b��a=c��b=c
ֱ��a2+b2=c2��a2+c2=b2��b2+c2=a2
*/
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
		if (a + b > c&&a + c > b&&b + c > a) {
			if (a == b && a == c && b == c) {
			printf("�ȱ�������");
			}
			else if (a == b || a == c || b == c) {
			printf("����");
				}
				else if (a*a + b * b == c * c || a * a + c * c == b * b || b * b + c * b == a * a) {
			printf("ֱ��");
				}
				else {
				printf("��������������");
			}
		}
		else{
		printf("������������");
	}
	return 0;
}
