#include <stdio.h>
#include <stdlib.h>

int max(int *numberArray, int Size)//*numberArray打數字 Size它的範圍 
{
	int i;//宣告i 
	
	int Max = INT_MIN;//宣告 Max = INT_MIN
	
	for (i = 0 ; i < Size ;i++)//尋訪 i從0開始計算 如果i小於Size 那他就加1 
	{
		if(Max < numberArray[i])//如果numberArray[i]大於Max 
		{
			Max = numberArray[i];//Max等於numberArray[i]
		} 
	}
	return Max;//回傳Max 
}

int main()
{
	int Array[5];//宣告 Array[5]
	int N,Max,i;//宣告 N和Max和i
	int result = 0;//宣告 result = 0
	while(scanf("%d %d %d %d %d",&Array[0],&Array[1],&Array[2],&Array[3],&Array[4])!=EOF)//while迴圈 輸入與輸出 
	{
		printf("The max number is %d\n",max(Array, 5));//顯示 最大值 
	}
	return 0;
}	
	
