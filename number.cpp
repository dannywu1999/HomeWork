#include <stdio.h>

int main()

{int a,i,j;//a,i,j 
	while (scanf("%d",&a)!=EOF){//块俱计%d 
		for(j=2;j<a;j++){//砞j单2 ja杠a碞1 
			if(a%j==0){//狦a%i单0 
				for(i=0;a%j==0;i++){//i单0のa%j单0薄猵i1  
a=a/j;}
if(i>1){//狦i>1 

    if(a!=1){printf("%d^%d * ",j,i);}//狦aぃ单 陪ボ j i

    else printf("%d^%d\n",j,i);  //玥陪ボ 

}
if(i==1){//狦i单1 
	printf("%d * ",j);}//陪ボj 
}	 
}
if(a!=1)//狦aぃ单1 
	printf("%d\n",a);//陪ボa 
}
return 0;
}
