#include<stdio.h>
#include<stdlib.h>
#include <time.h> 

void count(int *Array, int Size)
{
	int result = 0;
	int i;
	int count[10001];
	for (i=0 ; i<10001 ; i++)
	{
		count[i]=0;	
	}
	for (i=0 ; i<Size ; i++)
	{
		count[Array[i]]++;	
	}
	
	int Max=0;
	for (int i=0;i<10001;i++)
	{
		Array[i];
		if(count[i]>Max)
		{
			Max = count[i];	
		}
	}
	//////////////
	//取得Max 
	//////////////
	
	for (i=0 ; i<10001 ; i++)
	{
		if (count[i] == Max){
			printf("QQ %d Max = %d\n", i, Max);
		}
	}
}

int avg(int *Array, int Size)
{
	int result = 0;
	int sum = 0;
	int i;
	for (i=0 ; i<Size ; i++)
	{
		sum = sum + Array[i];
	}
	result = sum/Size;
	return result;
}

void showRandom(int *Array, int Size)//Array打數字 Size它的範圍 
{
	int i;//宣告i

	for (i = 0 ; i < Size ; i++)//尋訪 i從0開始計算 如果i小於Size 那他就加1
	{
		printf("%05d\n",Array[i]);	
			
	}
}

void generateRandom(int *Array, int Size)//Array打數字 Size它的範圍 
{
	int i;
	
	for (i = 0 ; i < Size ;i++)//尋訪 i從0開始計算 如果i小於Size 那他就加1 
	{
		Array[i]=(rand() % 10000) +1;//Array[i]的數值等於1到10000
		
	}
}

void median(int *Array,int Size)
{
	
}

int main()
{
	int i,result;
	int Array[99],Size=99;
	srand(time(NULL));//亂數種子
	generateRandom(Array,Size);
	//showRandom(Array,Size);
	result = avg(Array,Size);
	printf("平均值為%d\n",result);
	count(Array,Size);
}


