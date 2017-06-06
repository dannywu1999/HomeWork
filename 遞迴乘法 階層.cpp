#include <stdio.h>
#include <stdlib.h>

int MultiToN(int N){//宣告MultiToN 
	if (N == 1){//在N等於1的條件下 
		return 1;//回傳1 
	}
	return N * MultiToN(N - 1);//回傳N加AddToN(N-1) MultiToN(N-1)為1乘到N-1的數 
}

int main(){
	printf("Hi Multi to N: %d\n", MultiToN(6));//顯示 (Hi Multi to N: %d) %d是AddToN(N)也就是1乘到N的數 
	return 0; 
}	
