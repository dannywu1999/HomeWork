#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char x[1000];
	bool result = true;
	
	while(scanf("%s",x)!=EOF){	
		int stringlength = strlen(x) - 1;
		for(int i = 0 ; i < (stringlength + 1) / 2 ; i++ ){
			if(x[stringlength-i] != x[i]){
				result = false;
				break;
			}
		}
//		
//		if(result){
//			printf("yes\n");
//		}
//		else{
//			printf("no\n");
//		}

		printf("%s\n", result ? "yes" : "no");
		
	}
}

