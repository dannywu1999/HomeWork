#include<stdio.h>
#include<stdlib.h>

int main(){
	int N;//
	while( scanf("%d", &N) != EOF)
	{
		if(N <= 0){
			printf("[Error] Wrong input\n");
		}
		else if(N == 1)
		{
			printf("*\n");
		}
		else if( N == 2)
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
		else {// N >= 3				 
			for(int i_N = 0 ; i_N < N ; i_N++)
			{			
				printf("* ");			
			}
			printf("\n");
			for(int iN=0; iN<(N-2);iN++)
			{
				printf("* ");
				for(int iN_=0,i_N = 0 ; iN_ < (N - 2); iN_++)
				{//iN_���b�aN��e���X���ť� 
					printf("  ");//�L�ť�	
				}	
				printf("*\n");//�L* 
			}
			for(int i_N = 0 ; i_N < N ; i_N++)
			{			
				printf("* ");			
			}
			printf("\n");
		}	
	}
}	

