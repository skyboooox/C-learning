#include <stdio.h>
#include <stdlib.h>//�����
#include <time.h>//����ʱ��
int main()
{
	printf("��ӭ,����ϷΪÿ�κ͵������������,5�غϺ�����Ϊʤ����\n\n");
	printf("�������������,1����\n");
	char name;//�û���
	scanf_s("%c", &name,sizeof(name));
	printf("���������%c,��ʼ��Ϸ\n",name);
		//���������
	int a1,a2,a3,a4,a5,b1,b2,b3,b4,b5;//a����,b�û�
	srand((unsigned)time(NULL));//��ʱ���ʼ����������ӿ�,unsigned�޷�����
		a1 = rand() % 10;//�����1�غ�
		a2 = rand() % 10;
		a3 = rand() % 10;
		a4 = rand() % 10;
		a5 = rand() % 10;
		
		b1 = rand() % 10;
		b2 = rand() % 10;
		b3 = rand() % 10;
		b4 = rand() % 10;
		b5 = rand() % 10;
		//����ÿ�غ�,c ��������.d �û�����
	int c2, d2;
		c2 = a1 + a2;
		d2 = b1 + b2;
	int c3, d3;
		c3 = c2 + a3;
		d3 = d2 + a3;
	int c4, d4;
		c4 = c3 + a4;
		d4 = d3 + a4;
	int c5, d5;
		c5 = c4 + a5;
		d5 = d4 + a5;
	printf("\n�� 1 �غ�:\n����:%d\n%c:%d", a1, name, b1);//1�غ�
	printf("\n�� 2 �غ�:\n����:%d\n%c:%d", c2, name, d2);//2�غ�
	printf("\n�� 3 �غ�:\n����:%d\n%c:%d", c3, name, d3);//3�غ�
	printf("\n�� 4 �غ�:\n����:%d\n%c:%d", c4, name, d4);//2�غ�
	printf("\n�� 5 �غ�:\n����:%d\n%c:%d", c5, name, d5);//2�غ�
	if (c5 < d5) {
		printf("\n\n��Ӯ��");
	}
	else if(c5>d5){
		printf("\n\n������");
	}
	else if (c5 > d5) {
		printf("\n\nƽ��");
	}
	return 0;
}
