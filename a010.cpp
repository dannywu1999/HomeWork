#include <stdio.h>

int main(){
	int Power,Input,Factor;
	while(scanf("%d",&Input)!=EOF){
		for( Factor=2 ; Factor * Factor <= Input ; Factor++){
			if(Input%Factor == 0){
				//printf("Factor=%d\n",Factor);
				Power = 0;
				do{
					Input /= Factor;//Input = Input / Factor;
					Power++;
				}while(Input % Factor == 0);
				
				printf("Factor=%d^%d\n",Factor, Power);
				
			}
		}
		printf("Input=%d\n",Input);
	}
	return 0;
}




