#include<stdio.h>
#include<stdlib.h>

int main(){
	int kg,m;
	while(scanf("%d %d",&kg,&m)!=EOF)
	{
		if(kg/(m*m)<18.5)
		{
			printf("�魫�L��");
		}
			if(kg/(m*m)>=18.5&&kg/(m*m)<24)
		{
			printf("�魫���`");
		} 
	
			if(kg/(m*m)>=24)
		{
			printf("�魫�L��");
		}
	printf("\n");
	}
	
}
