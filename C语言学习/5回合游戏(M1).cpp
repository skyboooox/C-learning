#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	printf("��ӭ,����ϷΪÿ�κ͵������������,5�غϺ�����Ϊʤ����\n\n");
	
	printf("�������������,1����\n");
	char name;
	scanf_s("%c", &name);
	printf("���������%c,��ʼ��Ϸ\n",name);
	//���������
	int a1,a2,a3,a4,a5,b1,b2,b3,b4,b5;
	srand((unsigned)time(NULL));
		a1 = rand() % 10;
		a2 = rand() % 10;
		a3 = rand() % 10;
		a4 = rand() % 10;
		a5 = rand() % 10;

		b1 = rand() % 10;
		b2 = rand() % 10;
		b3 = rand() % 10;
		b4 = rand() % 10;
		b5 = rand() % 10;
	//����ÿ�غ�
	int c2, d2;//c,��������.d�û�����
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

	//1�غ�
	printf("\n�� 1 �غ�:\n");
	printf("����:"); 
	printf("%d",a1); 
	printf("\n");
	printf("%c:",name);
	printf("%d", b1);

	//2�غ�
	printf("\n\n�� 2 �غ�:\n");
	printf("����:");
	printf("%d", c2);
	printf("\n");
	printf("%c:", name);
	printf("%d", d2);

	//3�غ�
	printf("\n\n�� 3 �غ�:\n");
	printf("����:");
	printf("%d", c3);
	printf("\n");
	printf("%c:", name);
	printf("%d", d3);

	//4�غ�
	printf("\n\n�� 4 �غ�:\n");
	printf("����:");
	printf("%d", c4);
	printf("\n");
	printf("%c:", name);
	printf("%d", d4);

	//5�غ�
	printf("\n\n�� 5 �غ�:\n");
	printf("����:");
	printf("%d", c5);
	printf("\n");
	printf("%c:", name);
	printf("%d", d5);
	if (c5 < d5)
		printf("\n\n��Ӯ��");
	else
		printf("\n\n������");
	return 0;
}
