#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;//�ŧia�Mb 
	for(a=2 ; a<=9 ; a++ )//�w�qa��2��9���۵M�� 
	{	
		for(b=1 ; b<=9 ; b++ )//�w�qb��1��9���۵M��
		{
			printf("%d*%d=%2d ",a,b,a*b);//%d*d%=��a*b���� %d���L���� %�Md������2�O������w�ľa�S��� �᭱����X 
		}
		printf("\n");//���� 
		
	}
	return 0;
} 
