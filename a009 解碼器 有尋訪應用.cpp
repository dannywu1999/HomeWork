#include <stdio.h>
#include <math.h>
#include <string.h>

//https://zerojudge.tw/ShowProblem?problemid=a009
//�D�غ��}
 
int main() {		
	char input[200];//�ŧi input��200�Ӧr�� 
	int offset,i;//�ŧioffset�Mi 
	
	
	while(scanf("%s", input) != EOF){//while�j��s���J�r�� 
		for(offset=-128; offset < 128; offset++){//�M��or�M�X(��Ҧ����i��]�L�@�M)offset 
		
			if(input[0]+offset == '*'){//�ݥ[�h�ַ|�ܦ�* 
				//printf("i= %d %c\n", offset, input[0]+offset);
				for(i=0 ; i < strlen(input) ; i++ ){//strlen() �r����� 
					//
					printf("%c", input[i] + offset);
				}
				printf("\n");
			}
		}
	}
	
	return 0;
}

