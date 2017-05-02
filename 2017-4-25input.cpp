#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	
	printf("Please input one number\n: ");
	scanf("%d",&a);
	printf("%d\n",a);

	printf("Please input two numbers\n: ");
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);
	
	printf("Please input three numbers\n: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d %d %d\n",a,b,c);
	
	char x[30],y[30],z[30];
	printf("Please input one string\n: ");  
	scanf("%s",x);
	printf("%s\n",x);
	
	printf("Please input two strings\n: ");
	scanf("%s %s",x,y);
	printf("%s %s\n",x,y);
	  
	printf("Please input three strings\n: ");
	scanf("%s %s %s",x,y,z);
	printf("%s %s %s\n",x,y,z);            
}
