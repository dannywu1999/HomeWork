#include<stdio.h>
#include<stdlib.h>

int main(){
	int Number[100][100], column, row;//
	while( scanf("%d %d", &row , &column) != EOF){//	
		for(int i_row = 0 ; i_row < row ; i_row++){//
			for(int i_column = 0 ; i_column < column ; i_column++){//
				scanf("%d", &Number[i_row][i_column]);//
				
			}
		}
		
		for(int i_column = 0 ; i_column < column ; i_column++){
			for(int i_row = 0 ; i_row < row ; i_row++){
				printf("%d ", Number[i_row][i_column]);
			}
			printf("\n");
		//for(int i_row = 0 ; i_row < row ; i_row++){	for(int i_column = 0 ; i_column < column ; i_column++){printf("%d\n", Number[i_row][i_column]);
		
		}	
	}
}


