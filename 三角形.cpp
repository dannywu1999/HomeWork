#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
		if( a + b <= c || a+c <= b || b+c <= a){
			printf("���O�T����\n");
		}
		else{
		
			if(a*a + b*b > c*c && a*a + c*c > b*b && b*b + c*c > a*a){
				printf("�U���T����\n");
			}	
			if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
				printf("�����T����\n");
			}		
			if(a*a + b*b < c*c || a*a + c*c < b*b || b*b + c*c < a*a){
				printf("�w���T����\n");
			}
		}
	}
}

