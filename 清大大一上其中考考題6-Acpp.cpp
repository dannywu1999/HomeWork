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
	//���oMax 
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

void median(int *Array,int Size)
{
	
}

int main()
{
	int i,result;
	int Array[99],Size=99;
	srand(time(NULL));//�üƺؤl
	generateRandom(Array,Size);
	//showRandom(Array,Size);
	result = avg(Array,Size);
	printf("�����Ȭ�%d\n",result);
	count(Array,Size);
}


