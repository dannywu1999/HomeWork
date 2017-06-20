#include <stdio.h>
#include <stdlib.h>

int AddToN(int N){//宣告AddToN 
	if (N == 1){//在N等於1的條件下 
		return 1;//回傳1 
	}
	return N + AddToN(N - 1);//回傳N加AddToN(N-1) AddToN(N-1)為1加到N-1的數 
}

int main(){
	
	printf("Hi add to N: %d\n", AddToN(11));//顯示 (Hi add to N: %d) %d是AddToN(N)也就是1加到N的數 
	return 0; 
}
