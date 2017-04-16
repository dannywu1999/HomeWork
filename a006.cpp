#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {		
	char input[200];
	int offset,i;
	
	
	while(scanf("%s", input) != EOF){
		for(offset=-128; offset < 128; offset++){
			
			if(input[0]+offset == '*'){
				//printf("i= %d %c\n", offset, input[0]+offset);
				for(i=0 ; i < strlen(input) ; i++ ){
					printf("%c", input[i] + offset);
				}
				printf("\n");
			}
		}
	}
	
	return 0;
}
