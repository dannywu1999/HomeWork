#include <stdio.h>
#include <stdlib.h>

int AddToN(int N){//�ŧiAddToN 
	if (N == 1){//�bN����1������U 
		return 1;//�^��1 
	}
	return N + AddToN(N - 1);//�^��N�[AddToN(N-1) AddToN(N-1)��1�[��N-1���� 
}

int main(){
	
	printf("Hi add to N: %d\n", AddToN(11));//��� (Hi add to N: %d) %d�OAddToN(N)�]�N�O1�[��N���� 
	return 0; 
}
