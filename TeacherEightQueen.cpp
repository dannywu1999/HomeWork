#include <stdio.h> 
#include <stdlib.h>

int Board[8][8];

#define Queen 10

void initBoard(){//init為初始化 Board棋盤 
	for(int y = 0 ; y < 8 ; y ++){
		for(int x = 0 ; x < 8 ; x++){
			Board[y][x] = 0;
		}
	}
}

void displayBoard(){
	for(int y = 0 ; y < 8 ; y ++){
		for(int x = 0 ; x < 8 ; x++){
			
			if(Board[y][x] == Queen){
				printf("@ ");//@為皇后 
			}
			else{
				printf("  ");
			}//空白就是空格 
		}
		printf("\n");
	}
	printf("-------------------------\n");
}//分隔線 

void EightQueen(int Layer){
	if(Layer == 8){//Layer為層 
		displayBoard();
		return;
	}
	
	for(int x = 0 ; x < 8 ; x++){
		if(Board[Layer][x] == 0){
			Board[Layer][x] = Queen;
			
			//往下垂直
			for(int Temp = Layer + 1 ; Temp < 8 ; Temp++){//temp 為用完即丟的變數 在此指一層一層往下 
				if(Board[Temp][x] == 0){
					Board[Temp][x] = (Layer + 1);
				}
			}
			//往右往下
			int shift = 1;//shift在此為往右 
			for(int Temp = Layer + 1 ; Temp < 8 ; Temp++){
				if(x + shift >= 8) break;//break 跳出迴圈到for迴圈之外 
				if(Board[Temp][x + shift] == 0){
					Board[Temp][x + shift] = (Layer + 1);
				}
				shift++;
			}
			//往左往下
			shift = 1;//shift在此為往左 
			for(int Temp = Layer + 1 ; Temp < 8 ; Temp++){
				if(x - shift < 0) break;
				if(Board[Temp][x - shift] == 0){
					Board[Temp][x - shift] = (Layer + 1);
				}
				shift++;
			}
			
			EightQueen(Layer + 1); //往下一層 
			
			Board[Layer][x] = 0;
			//往下垂直
			for(int Temp = Layer + 1 ; Temp < 8 ; Temp++){
				if(Board[Temp][x] == (Layer + 1)){
					Board[Temp][x] = 0;
				}
			}
			//往右往下
			shift = 1;
			for(int Temp = Layer + 1 ; Temp < 8 ; Temp++){
				if(x + shift >= 8) break;
				if(Board[Temp][x + shift] == (Layer + 1)){
					Board[Temp][x + shift] = 0;
				}
				shift++;
			}
			//往左往下
			shift = 1;
			for(int Temp = Layer + 1 ; Temp < 8 ; Temp++){
				if(x - shift < 0) break;
				if(Board[Temp][x - shift] == (Layer + 1)){
					Board[Temp][x - shift] = 0;
				}
				shift++;
			}
		}
	}
}

int main()
{
	initBoard();
	EightQueen(0);//(0)為從0開始若打1 那只有下面7層 
}
