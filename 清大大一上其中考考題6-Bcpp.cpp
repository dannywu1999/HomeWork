#include<stdio.h>
#include<stdlib.h>
#include <time.h> 

int avg(int Array[99], int Size)
{
	int result = 0;
	int sum = 0;
	int i;
	for (i=0 ; i<Size ; i++){
		sum = sum + Array[i];
	}
	result = sum/Size;
	return result;
}

void showRandom(int *Array, int Size)//Array���Ʀr Size�����d�� 
{
	int i;//�ŧii

	for (i = 0 ; i < Size ; i++)//�M�X i�q0�}�l�p�� �p�Gi�p��Size ���L�N�[1
	{
		printf("%05d\n",Array[i]);	
			
	}
}

void generateRandom(int *Array, int Size)//Array���Ʀr Size�����d�� 
{
	int i;
	
	for (i = 0 ; i < Size ;i++)//�M�X i�q0�}�l�p�� �p�Gi�p��Size ���L�N�[1 
	{
		Array[i]=(rand() % 10000) +1;//Array[i]���ƭȵ���1��10000
		
	}
}

int main()
{
	int i;
	int Array[99],Size=99;
	srand(time(NULL));//�üƺؤl
	generateRandom(Array,Size);
	showRandom(Array,Size);
}
