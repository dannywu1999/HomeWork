#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void showRandom(int *Array, int Size)//Array���Ʀr Size�����d�� 
{
	int i;//�ŧii

	for (i = 0 ; i < Size ; i++)//�M�X i�q0�}�l�p�� �p�Gi�p��Size ���L�N�[1
	{
		printf("%d ",Array[i]);	
			
	}
	printf("\n");//���� 
}

void generateRandom(int *Array, int Size)//Array���Ʀr Size�����d�� 
{
	int i,temp;//�ŧii,temp 
	for (i = 0 ; i<Size ; i++)
	{
		Array[i] = i + 1 ;
	}
	
	for (i = 0 ; i < Size ;i++)//�M�X i�q0�}�l�p�� �p�Gi�p��Size ���L�N�[1 
	{
		//Array[i]=(rand() % 100) +1;//Array[i]���ƭȵ���1��100
		int index = (rand() % Size);
		int temp = Array[i];
		Array[i] = Array[index];
		Array[index] = temp;
	}
}

int main()
{
	int Array[100],Size = 49, N;//�ŧi Array[20]�MSize 
	scanf("%d",&N);
	srand(time(NULL));//�üƺؤl	
	
	for(int i = 0 ; i < N ; i++)//��for�j��g�}�X�����{���X 
	{
		generateRandom(Array,Size);//�NgenetateRandom function(����Random)
		showRandom(Array,6);//�NshowRandom function(���Random) 
	}
	
	 
	return 0;
}
