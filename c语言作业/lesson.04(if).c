#include <stdio.h>

int main()
{
	int score;
	
	printf("请输入你的成绩：");
	scanf("%d",&score);
	
	if (score >= 60)
	
    	printf("你过关！");
	
	else
	
		printf("你完了！"); 
	
	return 0;
}
