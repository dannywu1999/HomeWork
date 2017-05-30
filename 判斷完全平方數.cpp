#include <stdio.h>
#include <stdlib.h>
//#include <iostream>

bool isSquare(int N)
{
	bool result = false;
	for(int i = 1 ; i * i <= N ;i++)
	{
		if( N == i * i)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int N;
	scanf("%d",&N);
	
	if(isSquare(N))
	{
		printf("%d is square\n",N);
	}
	else
	{
		printf("%d is not square\n",N);
	}
}

