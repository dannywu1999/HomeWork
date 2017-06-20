#include<stdio.h>
#include<stdlib.h>

int main(){
	int N;//
	N=5; 
	if(N <= 0){
		printf("[Error] Wrong input\n");
	}
	else if(N == 1)
	{
		printf("*\n");
	}
	else if( N > 1)
	{
		for(int i_N = 0 ; i_N < N ; i_N++)
		{
			for(int iN = 0 ; iN < N ; iN++)
			{
				printf("*");
			}
			printf("\n");
		}	
	}
}	

