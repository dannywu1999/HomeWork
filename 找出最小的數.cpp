#include <stdio.h>
#include <stdlib.h>

int min(int *numberArray, int Size)//*numberArray���Ʀr Size�����d�� 
{
	int i;//�ŧii 
	
	int Min = INT_MAX;//�ŧi Min = INT_MAX
	
	for (i = 0 ; i < Size ;i++)//�M�X i�q0�}�l�p�� �p�Gi�p��Size ���L�N�[1 
	{
		if(Min > numberArray[i])//�p�GnumberArray[i]�p��Min 
		{
			Min = numberArray[i];//Min����numberArray[i]
		} 
	}
	return Min;//�^��Min 
}

int main()
{
	int Array[5];//�ŧi Array[5]
	int N,Min,i;//�ŧi N�MMin�Mi
	int result = 0;//�ŧi result = 0
	while(scanf("%d %d %d %d %d",&Array[0],&Array[1],&Array[2],&Array[3],&Array[4])!=EOF)//while�j�� ��J�P��X 
	{
		printf("The min number is %d\n",min(Array, 5));//��� �̤p�� 
		//printf("The max number is %d\n",max(Array, 5));//��� �̤j�� 
	}
	return 0;
}	
	
