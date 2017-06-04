#include<stdio.h>
#include<stdlib.h>


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
int main(){
	
	int result = 0,A,B;
	A = 8;
	B = 0;
	printf("result:A+B=%d\n", add(A, B));
	
	result = add(A, B);
	printf("result:A+B=%d\n", result);	
	printf("result:A-B=%d\n", sub(A,B));
	
	result = sub( A, B);
	printf("result:A-B=%d\n",result);
	printf("result:A*B=%d\n", mul(A,B));
	result = mul(A, B);
	printf("result:A*B=%d\n",result);
	result = divide(A,B);
	printf("result:A/B=%d\n",result);
	printf("result:A/B=%d\n", divide(A, B));
}

