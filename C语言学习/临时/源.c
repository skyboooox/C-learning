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
// 0>>�˳� 1>>�� 2>>�� 3>>�� 4>>��
int jia(int a,int b) {// 1>>��
	printf("%d", a + b);
}
int jian(int a, int b) {// 2>>��
	printf("%d", a - b);
}
int cheng(int a, int b) {// 3>>��
	printf("%d", a * b);
}
int chu(int a, int b) {// 4>>��
	printf("%d", a / b);
}
int main(int argc, char const* argv[]) {
	int x, y, n;
	printf("������һ������\n0>>�˳� 1>>�� 2>>�� 3>>�� 4>>��\n");
	scanf_s("%d", &n);
	
	switch (n) {
	case(0):
 		printf("�˳�");
		return 0;
		break;
	case(1):
		printf("������a+b=c��a��b\n");
		scanf_s("%d%d", &x, &y);
		jia(x,y); break;
	case(2):
		printf("������a+b=c��a��b\n");
		scanf_s("%d%d", &x, &y);
		jian(x,y); break;
	case(3):
		printf("������a+b=c��a��b\n");
		scanf_s("%d%d", &x, &y);
		cheng(x,y); break;
	case(4):
		printf("������a+b=c��a��b\n");
		scanf_s("%d%d", &x, &y);
		chu(x,y); break;
	default:
		printf("�������,����������");
		break;
	}

}