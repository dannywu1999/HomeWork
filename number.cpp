#include <stdio.h>

int main()

{int a,i,j;//�ŧia,i,j 
	while (scanf("%d",&a)!=EOF){//��J���%d 
		for(j=2;j<a;j++){//�]j����2 j�p��a����a�N�[1 
			if(a%j==0){//�p�Ga%i����0 
				for(i=0;a%j==0;i++){//�bi����0��a%j����0�����p�Ui�[1  
a=a/j;}
if(i>1){//�p�Gi>1 

    if(a!=1){printf("%d^%d * ",j,i);}//�p�Ga������@ ��� j i

    else printf("%d^%d\n",j,i);  //�_�h��� 

}
if(i==1){//�p�Gi����1 
	printf("%d * ",j);}//���j 
}	 
}
if(a!=1)//�p�Ga������1 
	printf("%d\n",a);//���a 
}
return 0;
}
