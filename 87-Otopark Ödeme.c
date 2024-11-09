#include<stdio.h>
#include<stdlib.h>

int main(){	
	
	int saat;
	
	printf("Otopark kalis saatini giriniz:");
	scanf("%d",&saat);
	
	if(saat>0 && saat<=4){
		printf("10 tl Odeme yapiniz!");
	}
	if(saat>=5 && saat<=8){
		printf("12 tl Odeme yapiniz!");
	}
	if(saat>=9 && saat<=12){
		printf("15 tl Odeme yapiniz!");
	}
	if(saat>=13){
		printf("20 tl Odeme yapiniz!");
	}
	return 0;
}
