//�洫ͷ�ļ�
#include <assert.h>//����ʽ���
#include <ctype.h>//����ת��������
#include <errno.h>//��������й�
#include <float.h>//����ֵ��ص�������ƽ̨�ĳ���
#include <limits.h>//���ֱ������͵ĸ�������
#include <locale.h>//�ض���������ã��������ڸ�ʽ�ͻ��ҷ���
#include <math.h>//��ѧ����,���� double ���͵Ĳ���
#include <setjmp.h>//�洢�� setjmp() �ͺ��� longjmp() 
#include <signal.h>//�������� sig_atomic_t�������������ú�һЩ�����������ִ���ڼ䱨��Ĳ�ͬ�źš�
#include <stdarg.h>//һ���������� va_list �������꣬��������������ڲ�������δ֪�������������ɱ䣩ʱ��ȡ�����еĲ�����
#include <stddef.h>//
#include <stdio.h>//���ֺ�����ִ����������
#include <stdlib.h>//�ĸ��������͡�һЩ��͸���ͨ�ù��ߺ���
#include <string.h>//�ַ���
#include <time.h>//�������ں�ʱ��
#define MAXSIZE 84998//����������(VS2019ͨ������)
#define PI 3.1415926 

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
	printf("����������");
	int month, day;
	scanf_s("%d%d", &month, &day);
	day = day + days(month, day);
	printf("��%d��\t", day);
	char w[8][7] = { "(+_+)/","����һ","���ڶ�","������","������","������","������","������" };
	printf("%s", w[day % 7 + 1]);
	return 0;
}