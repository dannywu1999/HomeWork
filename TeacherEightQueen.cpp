#include <stdio.h> 
#include <stdlib.h>

int Board[8][8];

#define Queen 10

void initBoard(){//init����l�� Board�ѽL 
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
				printf("@ ");//@���ӦZ 
			}
			else{
				printf("  ");
			}//�ťմN�O�Ů� 
		}
		printf("\n");
	}
	printf("-------------------------\n");
}//���j�u 

void EightQueen(int Layer){
	if(Layer == 8){//Layer���h 
		displayBoard();
		return;
	}
	
	for(int x = 0 ; x < 8 ; x++){
		if(Board[Layer][x] == 0){
			Board[Layer][x] = Queen;
			
			//���U����
			for(int Temp = Layer + 1 ; Temp < 8 ; Temp++){//temp ���Χ��Y�᪺�ܼ� �b�����@�h�@�h���U 
				if(Board[Temp][x] == 0){
					Board[Temp][x] = (Layer + 1);
				}
			}
			//���k���U
			int shift = 1;//shift�b�������k 
			for(int Temp = Layer + 1 ; Temp < 8 ; Temp++){
				if(x + shift >= 8) break;//break ���X�j���for�j�餧�~ 
				if(Board[Temp][x + shift] == 0){
					Board[Temp][x + shift] = (Layer + 1);
				}
				shift++;
			}
			//�������U
			shift = 1;//shift�b�������� 
			for(int Temp = Layer + 1 ; Temp < 8 ; Temp++){
				if(x - shift < 0) break;
				if(Board[Temp][x - shift] == 0){
					Board[Temp][x - shift] = (Layer + 1);
				}
				shift++;
			}
			
			EightQueen(Layer + 1); //���U�@�h 
			
			Board[Layer][x] = 0;
			//���U����
			for(int Temp = Layer + 1 ; Temp < 8 ; Temp++){
				if(Board[Temp][x] == (Layer + 1)){
					Board[Temp][x] = 0;
				}
			}
			//���k���U
			shift = 1;
			for(int Temp = Layer + 1 ; Temp < 8 ; Temp++){
				if(x + shift >= 8) break;
				if(Board[Temp][x + shift] == (Layer + 1)){
					Board[Temp][x + shift] = 0;
				}
				shift++;
			}
			//�������U
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
	EightQueen(0);//(0)���q0�}�l�Y��1 ���u���U��7�h 
}
