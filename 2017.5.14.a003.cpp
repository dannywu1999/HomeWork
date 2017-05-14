	#include<stdio.h>
#include<stdlib.h>
int main(){
	int M,D,S;
	while(scanf("%d %d",&M,&D)!=EOF)
	{
				
		if((2*M+D)%3==0){
			printf("´¶³q\n");
		}	
		if((2*M+D)%3==1){
			printf("¦N\n");
		}		
		if((2*M+D)%3==2){
			printf("¤j¦N\n");
			}
	}
}

