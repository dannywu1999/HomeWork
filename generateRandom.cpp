#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void showRandom(int *Array, int Size)//Array���Ʀr Size�����d�� 
{
	int i;//�ŧii
	
	for (i = 0 ; i < Size ; i++)//�M�X i�q0�}�l�p�� �p�Gi�p��Size ���L�N�[1
	{
		printf("%d\n",Array[i]);		
	}
}

void generateRandom(int *Array, int Size)//Array���Ʀr Size�����d�� 
{
	int i;//�ŧii 
	srand(time(NULL));//�üƺؤl 
	for (i = 0 ; i < Size ;i++)//�M�X i�q0�}�l�p�� �p�Gi�p��Size ���L�N�[1 
	{
		Array[i]=(rand() % 100) +1;//Array[i]���ƭȵ���1��100 
	}
}

int main()
{
	int Array[20];//�ŧi Array[20]
	
	generateRandom(Array,20);//�NgenetateRandom function(����Random) 
	showRandom(Array,20);//�NshowRandom function(���Random) 
	 
	return 0;
}	
	
