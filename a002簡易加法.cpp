#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,sum;
	while(scanf("%d %d %d %d", &a, &b, &c, &d) != EOF)
	{
		sum = a + b + c + d;
		printf("%d\n",sum);
	}
	
	
	return 0;
}
