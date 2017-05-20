#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N;//
	while( scanf("%d", &N) != EOF)
	{ 
		for(int i_N = 0 ; i_N < N ; i_N++){
			//printf("*\n");
			for(int iN=0 ; iN < i_N + 1 ; iN++){
				printf("*");
				
			}
			printf("\n");
		}
	} 		
}	

