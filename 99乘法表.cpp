#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;//宣告a和b 
	for(a=2 ; a<=9 ; a++ )//定義a為2到9的自然數 
	{	
		for(b=1 ; b<=9 ; b++ )//定義b為1到9的自然數
		{
			printf("%d*%d=%2d ",a,b,a*b);//%d*d%=為a*b等於 %d為他的值 %和d之間的2是對其兩格當緩衝靠又對齊 後面為輸出 
		}
		printf("\n");//換行 
		
	}
	return 0;
} 
