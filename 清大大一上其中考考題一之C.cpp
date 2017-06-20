#include<stdio.h>
#include<stdlib.h>

int main(){
	int N;
	N=5;
	if(N == 1)
	{
		printf("*\n");
	}
	else if( N > 1)
	{
		for(int i = 0 ; i < N ; i++)
		{
			//printf("*\n");
			for(int iN = 0 ; iN < N-i ; iN++){
				printf("*");
			}
			printf("\n");	
		}
	}
}	
