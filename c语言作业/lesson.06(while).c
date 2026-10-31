#include<stdio.h>

int main ()
{
	int sum = 0;
	int i = 1;
	
	while (i <= 100)
	{
		if(i % 2 ==0)
		{
			sum = sum + i;
		}
		
		i =i + 1;
	}
	
	printf("1到100的偶数和是 %d\n",sum);
	
	return 0;
}
