#include<stdio.h>
#include<stdlib.h>

//1 den 7 ye kadar olan sayıları tutsun ve bunları birbiriyle çarpsın

int main(){
	
	int sayilar[]={1,2,3,4,5,6,7};
	int i;
	int fak;
	for(i=0;i<7;i++){
		fak=fak*sayilar[i];
		printf("%d!\n",sayilar[i]);	
	}
		printf("Sonuc: %d\n",fak);

	return 0;
}
