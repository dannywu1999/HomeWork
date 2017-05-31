#include <stdio.h>
#include <stdlib.h>

int max(int *numberArray, int Size)//*numberArray打數字 Size它的範圍 
{
	for (int i = 0 ; i < Size ;i++)
	{
		printf("%d\n", numberArray[i]); 
	}
}

int main()
{
	int N;
	int Array[5];
	int Max = -100;
	scanf("Array[5]",&Array);
	for (int i=0;i<5;i++)
	{
		Array[i];
		if(Array[i]>Max)
		{
			Max = Array[i];	
		}
	}
	printf("%d/n",Max);
	/*Array[0] = 12;
	Array[1] = 0;
	Array[2] = 1;
	Array[3] = 5;
	Array[4] = 90;

	max(Array, 5);*/
	
	return 0;
}
