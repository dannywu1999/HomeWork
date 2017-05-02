#include<stdio.h>
#include<stdlib.h>
int main(){

	int High ,up, down, time; 	
	while( scanf("%d %d %d", &High, &up, &down) != EOF){
			
	    printf("time=%d\n",(High-down)/(up-down));//設High為高 a為上升　ｂ為下降　H=ta-(t-1)b   ta-tb+b=H   t(a-b)=H-b   t=(H-b)/(a-b)
		for(time= 0 ; time*(up-down)<(High-down) ; time++){
		}
		printf("time=%d\n",time)	;
  	}
}

