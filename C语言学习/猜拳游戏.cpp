#include <stdio.h>
#include <stdlib.h>//随机数
#include <time.h>//调用时间
#include <math.h>//数学函数
/*
石头=>0
剪刀=>1
布 =>2
退出=>3
*/
int main() {
	//char i[4] = { '石头', '剪刀', '布', '\0' };//将几个名称放入数组中方便读取,md不会,放弃
	int wanjia,computer;
	while(1)
	{
		printf("      猜拳游戏\n*输入数字,按回车继续*\n     0==>石头\n     1==>剪刀\n     2==>布\n\n     3==>退出\n");
		//读取玩家
		scanf_s("%d", &wanjia);
		if (wanjia == 3) //输入3退出循环
			break;
		printf("\n你出了====>");
		switch (wanjia)
		{
		case 0:printf("石头\n");
			break;
		case 1:printf("剪刀\n");
			break;
		case 2:printf("布 \n");
			break;
		}
		//计算电脑
		srand((unsigned)time(NULL));
		computer = rand() % 3;
		printf("电脑出了==>");
		switch (computer)
		{
		case 0:printf("石头\n");
			break;
		case 1:printf("剪刀\n");
			break;
		case 2:printf("布 \n");
			break;
		}
		//计算输赢
		if (wanjia == computer) {
			printf("\n     平局\n\n\n");
		}
		else if (wanjia == 0 && computer == 1 || wanjia == 1 && computer == 2 || wanjia == 2 && computer == 0) {
			printf("\n     你赢了\n\n\n");
		}
		else if (wanjia == 1 && computer == 0 || wanjia == 2 && computer == 1 || wanjia == 0 && computer == 2) {
			printf("\n      你输了\n\n\n");
		}
	} 
	return 0;
}
