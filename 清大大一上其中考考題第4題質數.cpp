#include <stdio.h>
#include <stdlib.h>
#include <iostream>
bool isPrine(int N)
{
	bool result = false;
	if(N==1){
		return false;
	}
	if(N==2){
		return true;
	}
	if(N%2==0){
		return false;	
	}
	for(int i=3; i * i <= N ;i+=2 )
	{
		//printf("%d\n",i);
		if(N%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()//prine½è¼Æ 
{	
	int N;
	for(int i=1;i<101;i++)
	{
		if(isPrine(i))
		{
			printf("%d is prime\n", i);	
		}
		else
		{
			printf("%d is NOT prime\n", i);	
		}
	}
	//printf("%d is%s prime\n", N, isPrine(N) ? "" : "NOT");
}

