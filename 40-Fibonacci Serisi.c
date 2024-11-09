#include<stdio.h>
#include<stdlib.h>

//fibonacci serisinin ilk 10 elemanýný listeleyen (1,1,2,3,5,8,13,21)
int main(){

	int a=1;
	int b=1;
	int c;	
	int i;
	printf("%d\n",a);
	printf("%d\n",b);
	
	for(i=1;i<=8;i++){
		
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	return 0;
}
