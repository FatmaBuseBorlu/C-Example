#include<stdio.h>
#include<stdlib.h>

//1 den 41 e kadar +4 artan ardýþýk doðal sayý ( 1+5+9+13+17+21+25+29+33+37+41)
int main(){

	int i;
	int a=0;
	
	for(i=1;i<=41;i+=4){
		
		a=a+i;
		printf("%d\n",i);
	}
	printf("Toplam Sonuc:%d\n",a);
	return 0;
}
