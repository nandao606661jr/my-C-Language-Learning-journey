#include <stdio.h>

int main()
{
	int w;
	int s;
	int y;
	int l;
	int h;
	int d;
	int a;
	
	printf("请输入你的语文成绩：");
	scanf("%d",&w);
	
	printf("请输入你的数学成绩：");
	scanf("%d",&s);
	
	printf("请输入你的英语成绩：");
	scanf("%d",&y);
	
	printf("请输入你的物理成绩：");
	scanf("%d",&l);
	
	printf("请输入你的化学成绩：");
	scanf("%d",&h);
	
	printf("请输入你的地理成绩：");
	scanf("%d",&d);
	
	a = w + s + y + l + h + d;
	printf("你的总成绩是：%d\n",a);
	
	return 0;	 
}
