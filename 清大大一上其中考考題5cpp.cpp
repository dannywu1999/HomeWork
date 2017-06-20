#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	int Array[10];//[1,3,5,7,9,2,4,6,8,0];
	
	Array[0] = 1;
	Array[1] = 3;
	Array[2] = 5;
	Array[3] = 7;
	Array[4] = 9;
	Array[5] = 2;
	Array[6] = 4;
	Array[7] = 6;
	Array[8] = 8;
	Array[9] = 0;
	for(i=0;i<10;i++)
	{
		printf("%d",i);	
	}
}
