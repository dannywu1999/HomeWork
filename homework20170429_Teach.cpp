#include<stdio.h>
#include<stdlib.h>

int main(){
	int Number[20][20], X, Y;
	
	printf("Please input Y, X\n: ");
	scanf("%d %d", &Y, &X);
	
	printf("Please input numbers\n: ");
	for(int i_Y = 0 ; i_Y < Y ; i_Y++){
		for(int i_X = 0 ; i_X < X ; i_X++){
			scanf("%d", &Number[i_Y][i_X]);
			printf("(%d, %d)", i_Y, i_X);
		}
		printf("\n");
	}
	printf("The numbers\n: \n");
	for(int i_Y = 0 ; i_Y < Y ; i_Y++){
		for(int i_X = 0 ; i_X < X ; i_X++){
			printf("(%d, %d) = %d\n", i_Y, i_X, Number[i_Y][i_X]);
		}
	}
}
