#include<stdio.h>
#include<stdlib.h>
int main()
{

	int  interval, sum;
	scanf("%d %d",&interval,&sum);
	int result = 1 - interval;
	for(int i = 0 ; i<10; i++)
	{
		result = result + interval;
		if(result > sum)
		{
			result = result - sum ;
		}
		printf("%d ",result);
	}
}
