#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c;
	
	int X1, X2;
	int AnswerTemp;
	
	while(scanf("%d %d %d", &a, &b, &c) != EOF){
		
		AnswerTemp = b * b - 4 * a * c;
		
		if(AnswerTemp < 0){
			printf("No real root\n");	
		}
		else if(AnswerTemp == 0){
			X1 = (-1 * b) / (2 * a);
			printf("Two same roots x=%d\n", X1);
		}
		else{
			
			X1 = ((-1*sqrt( AnswerTemp)+ (-1 * b)))/( 2 * a);
			X2 = ((sqrt( AnswerTemp)+ (-1 * b)))/( 2 * a);
			
			if(X1 > X2){
				printf("Two different roots x1=%d , x2=%d\n", X1, X2);
			}
			else{
				printf("Two different roots x1=%d , x2=%d\n", X2, X1);
			}
			
		}
	}
	return 0;
	}
