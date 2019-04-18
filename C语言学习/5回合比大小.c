#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
电脑和用户分别随机5个数字
累加后最大的获胜
*/
int main()
{
	printf("欢迎,本游戏为每次和电脑随机抽数字,5回合后最大的为胜利方\n\n");
	
	printf("请输入你的名字,1个字\n");
	char name;
	scanf_s("%c", &name);
	printf("你的名字是%c,开始游戏\n",name);
	//生成随机数
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
	//计算每回合
	int c2, d2;//c,电脑总数.d用户总数
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

	//1回合
	printf("\n第 1 回合:\n");
	printf("电脑:"); 
	printf("%d",a1); 
	printf("\n");
	printf("%c:",name);
	printf("%d", b1);

	//2回合
	printf("\n\n第 2 回合:\n");
	printf("电脑:");
	printf("%d", c2);
	printf("\n");
	printf("%c:", name);
	printf("%d", d2);

	//3回合
	printf("\n\n第 3 回合:\n");
	printf("电脑:");
	printf("%d", c3);
	printf("\n");
	printf("%c:", name);
	printf("%d", d3);

	//4回合
	printf("\n\n第 4 回合:\n");
	printf("电脑:");
	printf("%d", c4);
	printf("\n");
	printf("%c:", name);
	printf("%d", d4);

	//5回合
	printf("\n\n第 5 回合:\n");
	printf("电脑:");
	printf("%d", c5);
	printf("\n");
	printf("%c:", name);
	printf("%d", d5);
	if (c5 < d5)
		printf("\n\n你赢了");
	else
		printf("\n\n你输了");
	return 0;
}
