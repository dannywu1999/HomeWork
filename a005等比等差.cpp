#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,a,b,c,d,e;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d %d %d %d",&a,&b,&c,&d);	
		if(a+d==b+c){
			e=d+b-a;
			printf("%d %d %d %d %d\n",a,b,c,d,e);
		}
		else{
			e=d*b/a;
			printf("%d %d %d %d %d\n",a,b,c,d,e);
		}	
	}
}
