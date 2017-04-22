#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
		if( a + b <= c || a+c <= b || b+c <= a){
			printf("不是三角形\n");
		}
		else{
		
			if(a*a + b*b > c*c && a*a + c*c > b*b && b*b + c*c > a*a){
				printf("銳角三角形\n");
			}	
			if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
				printf("直角三角形\n");
			}		
			if(a*a + b*b < c*c || a*a + c*c < b*b || b*b + c*c < a*a){
				printf("鈍角三角形\n");
			}
		}
	}
}

