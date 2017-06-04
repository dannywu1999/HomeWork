#include <stdio.h>
#include <stdlib.h>

int min(int *numberArray, int Size)//*numberArray打數字 Size它的範圍 
{
	int i;//宣告i 
	
	int Min = INT_MAX;//宣告 Min = INT_MAX
	
	for (i = 0 ; i < Size ;i++)//尋訪 i從0開始計算 如果i小於Size 那他就加1 
	{
		if(Min > numberArray[i])//如果numberArray[i]小於Min 
		{
			Min = numberArray[i];//Min等於numberArray[i]
		} 
	}
	return Min;//回傳Min 
}

int main()
{
	int Array[5];//宣告 Array[5]
	int N,Min,i;//宣告 N和Min和i
	int result = 0;//宣告 result = 0
	while(scanf("%d %d %d %d %d",&Array[0],&Array[1],&Array[2],&Array[3],&Array[4])!=EOF)//while迴圈 輸入與輸出 
	{
		printf("The min number is %d\n",min(Array, 5));//顯示 最小值 
		//printf("The max number is %d\n",max(Array, 5));//顯示 最大值 
	}
	return 0;
}	
	
