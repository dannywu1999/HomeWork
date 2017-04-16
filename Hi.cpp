#include<stdio.h>
int main() {
	
	int Loop, i;
	
	int NumberList[4];
	
	int TempA, TempB;
	
	scanf("%d", &Loop);
	
	for(i = 0 ; i < Loop ; i++){
		scanf("%d %d %d %d", &NumberList[0], &NumberList[1], &NumberList[2], &NumberList[3]);
		
		TempA = NumberList[1] - NumberList[0];
		TempB = NumberList[2] - NumberList[1];
		
		if(TempA == TempB){
			printf("%d %d %d %d %d\n", NumberList[0], NumberList[1], NumberList[2], NumberList[3], NumberList[3] + TempA);
		}
		else{
			TempA = NumberList[1] / NumberList[0];
			printf("%d %d %d %d %d\n", NumberList[0], NumberList[1], NumberList[2], NumberList[3], NumberList[3] * TempA);
		}
	}
		
	return 0;
}
