#include <stdio.h>
#include <stdlib.h>

int max(int *numberArray, int Size)//*numberArray打數字 Size它的範圍 
{
	int result = 0,i;
	for (i = 0 ; i < Size ;i++)
	{
		
		printf("%d\n",numberArray[i]);
	}
	return result;
}

int main()
{
	char Array[5];
	int N,Max,i;
	int result = 0;
	while(scanf("Array[5]",Array)!=EOF)
	{
	for (i=0;i<5;i++)
		{
			Array[i];
			if(Array[i]>Max)
			{
				Array[i];
				{
					Max = Array[i];	
				}
			}
		}
	printf("The max number is %d\n",max);
	/*Array[0] = 12;
	z]
	Array[1] = 0;
	Array[2] = 1;
	Array[3] = 5;
	Array[4] = 90;

	max(Array, 5);*/
	return 0;
	return result;
	}
}	
	
