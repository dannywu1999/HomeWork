#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void showRandom(int *Array, int Size)//Array打數字 Size它的範圍 
{
	int i;//宣告i
	
	for (i = 0 ; i < Size ; i++)//尋訪 i從0開始計算 如果i小於Size 那他就加1
	{
		printf("%d\n",Array[i]);		
	}
}

void generateRandom(int *Array, int Size)//Array打數字 Size它的範圍 
{
	int i,temp;//宣告i,temp 
	for (i = 0 ; i<Size ; i++)
	{
		Array[i] = i + 1 ;
	}
	
	for (i = 0 ; i < Size ;i++)//尋訪 i從0開始計算 如果i小於Size 那他就加1 
	{
		//Array[i]=(rand() % 100) +1;//Array[i]的數值等於1到100
		int index = (rand() % Size);
		int temp = Array[i];
		Array[i] = Array[index];
		Array[index] = temp;
	}
}

int main()
{
	int Array[100],Size;//宣告 Array[20]和Size 
	scanf("%d",&Size);
	srand(time(NULL));//亂數種子	
	generateRandom(Array,Size);//代genetateRandom function(產生Random) 
	showRandom(Array,Size);//代showRandom function(顯示Random) 
	 
	return 0;
}	
	
