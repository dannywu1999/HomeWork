#include <stdio.h>
#include <stdlib.h>

int MultiToN(int N){//�ŧiMultiToN 
	if (N == 1){//�bN����1������U 
		return 1;//�^��1 
	}
	return N * MultiToN(N - 1);//�^��N�[AddToN(N-1) MultiToN(N-1)��1����N-1���� 
}

int main(){
	printf("Hi Multi to N: %d\n", MultiToN(6));//��� (Hi Multi to N: %d) %d�OAddToN(N)�]�N�O1����N���� 
	return 0; 
}	
