#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N;//
	while( scanf("%d", &N) != EOF)
	{ 
		for(int i_N = 0 ; i_N < N ; i_N++){// i_N���ĴX-1�� 
			//printf("*\n");
			
			
			
			for(int iN_=0 ; iN_ < (N - i_N - 1); iN_++){//iN_���b�aN��e���X���ť� 
				printf(" ");//�L�ť�	
			}				
			for(int iN=0 ; iN < i_N + 1 ; iN++){//iN���b�ĴX�榳�X��* 
				printf("* ");//�L* 
				
			}
			printf("\n");//���� 
		}
	} 		
}	

