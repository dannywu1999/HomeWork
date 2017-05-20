#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N;//
	while( scanf("%d", &N) != EOF)
	{ 
		for(int i_N = 0 ; i_N < N ; i_N++){// i_N為第幾-1行 
			//printf("*\n");
			
			
			
			for(int iN_=0 ; iN_ < (N - i_N - 1); iN_++){//iN_為在地N行前有幾的空白 
				printf(" ");//印空白	
			}				
			for(int iN=0 ; iN < i_N + 1 ; iN++){//iN為在第幾行有幾個* 
				printf("* ");//印* 
				
			}
			printf("\n");//換行 
		}
	} 		
}	

