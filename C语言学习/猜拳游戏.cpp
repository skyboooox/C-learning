#include <stdio.h>
#include <stdlib.h>//�����
#include <time.h>//����ʱ��
#include <math.h>//��ѧ����
/*
ʯͷ=>0
����=>1
�� =>2
�˳�=>3
*/
int main() {
	//char i[4] = { 'ʯͷ', '����', '��', '\0' };//���������Ʒ��������з����ȡ,md����,����
	int wanjia,computer;
	while(1)
	{
		printf("      ��ȭ��Ϸ\n*��������,���س�����*\n     0==>ʯͷ\n     1==>����\n     2==>��\n\n     3==>�˳�\n");
		//��ȡ���
		scanf_s("%d", &wanjia);
		if (wanjia == 3) //����3�˳�ѭ��
			break;
		printf("\n�����====>");
		switch (wanjia)
		{
		case 0:printf("ʯͷ\n");
			break;
		case 1:printf("����\n");
			break;
		case 2:printf("�� \n");
			break;
		}
		//�������
		srand((unsigned)time(NULL));
		computer = rand() % 3;
		printf("���Գ���==>");
		switch (computer)
		{
		case 0:printf("ʯͷ\n");
			break;
		case 1:printf("����\n");
			break;
		case 2:printf("�� \n");
			break;
		}
		//������Ӯ
		if (wanjia == computer) {
			printf("\n     ƽ��\n\n\n");
		}
		else if (wanjia == 0 && computer == 1 || wanjia == 1 && computer == 2 || wanjia == 2 && computer == 0) {
			printf("\n     ��Ӯ��\n\n\n");
		}
		else if (wanjia == 1 && computer == 0 || wanjia == 2 && computer == 1 || wanjia == 0 && computer == 2) {
			printf("\n      ������\n\n\n");
		}
	} 
	return 0;
}
