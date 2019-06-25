#include "祖传头文件.h"
/*
电脑和用户分别随机5个数字
累加后最大的获胜
功能和 5回合比大小.c 一样
此版本只是精简部分代码
*/
int main(int argc, char const* argv[]){
	printf("欢迎,本游戏为每次和电脑随机抽数字,5回合后最大的为胜利方\n\n");
	printf("请输入你的名字,1个字\n");
	char name;//用户名
	scanf_s("%c", &name,sizeof(name));
	printf("你的名字是%c,开始游戏\n",name);
		//生成随机数
	int a1,a2,a3,a4,a5,b1,b2,b3,b4,b5;//a电脑,b用户
	srand((unsigned)time(NULL));//用时间初始化随机数种子库,unsigned无符号型
		a1 = rand() % 10;//随机第1回合
		a2 = rand() % 10;
		a3 = rand() % 10;
		a4 = rand() % 10;
		a5 = rand() % 10;

		b1 = rand() % 10;
		b2 = rand() % 10;
		b3 = rand() % 10;
		b4 = rand() % 10;
		b5 = rand() % 10;
		//计算每回合,c 电脑总数.d 用户总数
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
	printf("\n第 1 回合:\n电脑:%d\n%c:%d", a1, name, b1);//1回合
	printf("\n第 2 回合:\n电脑:%d\n%c:%d", c2, name, d2);//2回合
	printf("\n第 3 回合:\n电脑:%d\n%c:%d", c3, name, d3);//3回合
	printf("\n第 4 回合:\n电脑:%d\n%c:%d", c4, name, d4);//2回合
	printf("\n第 5 回合:\n电脑:%d\n%c:%d", c5, name, d5);//2回合
	if (c5 < d5) {
		printf("\n\n你赢了");
	}
	else if(c5>d5){
		printf("\n\n你输了");
	}
	else if (c5 > d5) {
		printf("\n\n平局");
	}
	return 0;
}
//
