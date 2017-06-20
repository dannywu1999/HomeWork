#include<stdio.h>
#include<stdlib.h>

int main(){
	int kg,m;
	while(scanf("%d %d",&kg,&m)!=EOF)
	{
		if(kg/(m*m)<18.5)
		{
			printf("體重過輕");
		}
			if(kg/(m*m)>=18.5&&kg/(m*m)<24)
		{
			printf("體重正常");
		} 
	
			if(kg/(m*m)>=24)
		{
			printf("體重過重");
		}
	printf("\n");
	}
	
}
