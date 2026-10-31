#include <stdio.h>

int main(void) 
{
	int a;
	int b;
	int sum;
	
	printf("请输入第一个整数: ");
	scanf("%d", &a);
	
	printf("请输入第二个整数: ");
	scanf("%d", &b);
	
	sum = a + b;
	
	printf("两个数的和是： %d\n" ,sum); 
	
	return 0;
}
