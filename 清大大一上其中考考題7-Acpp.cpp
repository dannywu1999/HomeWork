#include<stdio.h>
#include<stdlib.h>

int AddToN(int N)
{
	if(N==1){
		return 1;
	}
	return N + AddToN(N-1);
} 

int main()
{
	printf("1+2+3...+100的總和為: %d\n",AddToN(100));
	return 0;
}
