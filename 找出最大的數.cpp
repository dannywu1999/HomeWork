#include <stdio.h>
#include <stdlib.h>

int max(int *numberArray, int Size)//*numberArray���Ʀr Size�����d�� 
{
	int i;//�ŧii 
	
	int Max = INT_MIN;//�ŧi Max = INT_MIN
	
	for (i = 0 ; i < Size ;i++)//�M�X i�q0�}�l�p�� �p�Gi�p��Size ���L�N�[1 
	{
		if(Max < numberArray[i])//�p�GnumberArray[i]�j��Max 
		{
			Max = numberArray[i];//Max����numberArray[i]
		} 
	}
	return Max;//�^��Max 
}

int main()
{
	int Array[5];//�ŧi Array[5]
	int N,Max,i;//�ŧi N�MMax�Mi
	int result = 0;//�ŧi result = 0
	while(scanf("%d %d %d %d %d",&Array[0],&Array[1],&Array[2],&Array[3],&Array[4])!=EOF)//while�j�� ��J�P��X 
	{
		printf("The max number is %d\n",max(Array, 5));//��� �̤j�� 
	}
	return 0;
}	
	
