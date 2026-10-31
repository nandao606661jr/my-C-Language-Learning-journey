#include<stdio.h>

int main ()
{
	double a;
	double b; 
	
	printf("请输入你要计算的第一个数字：");
	scanf("%lf",&a);
	
	printf("请输入你要计算的第二个数字：");
	scanf("%lf",&b);
	
	printf("加法: %f \n",a + b);
	printf("减法: %f \n",a - b);
	printf("乘法: %f \n",a * b);
	if(b!= 0)
    {
	    printf("除法: %f \n",a / b);
    }
	else
	{
		printf("除数不能为零！\n");
	}
	return 0; 
}
