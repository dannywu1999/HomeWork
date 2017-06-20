#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
int minimum(int A, int B)
{
	int result = 0;
	int X,Y;
	
	if ( A > B )
	{
		result = B;
	}
	else
	{
		result = A;	
	}	
	return result;
}
int main(){
	
	int result = 0,A,B;
	scanf("%d %d",&A,&B);
	printf("%d\n", add(A, B));
	printf("%d\n", sub(A,B));
	printf("%d\n", mul(A,B));
	result = minimum(A,B);
	printf("%d\n",result);
}
