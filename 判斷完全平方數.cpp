#include <stdio.h>
#include <stdlib.h>
#include <iostream>

bool isSquare(int N)
{
	bool result = false;
	for(int i=1; i * i <= N ;i++)
	{
		if(N==i*i)
		{
			return true;
		}
	}
	return false;
}


/*
bool isPrine(int N)
{
	bool result = false;
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
	scanf("%d",&N);
	
	if(isPrine(N)){
		printf("%d is prime\n", N);	
	}
	else{
		printf("%d is NOT prime\n", N);	
	}
	
	//printf("%d is%s prime\n", N, isPrine(N) ? "" : "NOT");
}*/
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

