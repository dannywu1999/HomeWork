#include <stdio.h>
#include <math.h>
#include <string.h>

//https://zerojudge.tw/ShowProblem?problemid=a009
//題目網址
 
int main() {		
	char input[200];//宣告 input有200個字元 
	int offset,i;//宣告offset和i 
	
	
	while(scanf("%s", input) != EOF){//while迴圈連續輸入字串 
		for(offset=-128; offset < 128; offset++){//遍歷or尋訪(把所有的可能跑過一遍)offset 
		
			if(input[0]+offset == '*'){//看加多少會變成* 
				//printf("i= %d %c\n", offset, input[0]+offset);
				for(i=0 ; i < strlen(input) ; i++ ){//strlen() 字串長度 
					//
					printf("%c", input[i] + offset);
				}
				printf("\n");
			}
		}
	}
	
	return 0;
}

