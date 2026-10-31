#include <stdio.h>

int main ()
{
	int score;
	
	printf("请输入你的成绩：");
	scanf("%d",&score);
	
	if(score < 0 || score >100 )
	{
		printf("成绩输入错误");
	}
	else if(score >= 90)
	{
		printf("优秀"); 
	}
	else if (score >= 80)
	{
		printf("良好");
	}
	else if (score >= 60)
	{
		printf("及格");
	}
	else
	{
		printf("不及格");
	}
return 0 ; 
}
