int main(int argc, char const *argv[])
{
	int am[8],pm[8],x;
	char am[]={'a1','a2','a3','a4','a5','a6','a7','\0'}
	char pm[]={'b1','b2','b3','b4','b5','b6','b7','\0'}
	printf("请输入   上午>0    下午>1\n");
	scanf("%d",&x);
	if(x>2){
		printf("输入错误\n");
		return 0;
	}else{
		printf("请输入星期几(数字1~7)\n");
		scanf("%d",&y);
		if (y==0||y>7)
		{
			printf("输入错误\n");
		return 0;
		}else{
			
		}
	}
	return 0;
}