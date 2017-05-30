#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int XX = 0;

int add(int A, int B){
	int result = 0;
	
	result = A + B;
	
	return result;	
}
int sub(int C, int D)
{
	int result = 0;
	
	result = C - D;
	
	return result;
}
int mul(int E, int F)
{
	int result = 0;
	
	result = E * F;
	
	return result;
}
int divide(int G, int H)
{
	int result = 0;
	
	if(H != 0)
	{	
		result = G / H;
	}
	else
	{
		printf("error ");
	}
	
	return result;
}
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
}

