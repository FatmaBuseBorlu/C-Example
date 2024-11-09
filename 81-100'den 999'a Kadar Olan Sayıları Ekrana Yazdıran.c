#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sayac=0;
	int i,yuzler,onlar,birler;
	
	printf("Uc basamakli rakamlari birbirinden farkli sayilarin degerini bulan program\n");
	
	for(i=100;i<=999;i++){
		
		birler=i%10;
		onlar=(i/10)%10;
		yuzler=i/100;
		
		if(birler != onlar && birler != yuzler && onlar != yuzler ){
			
			printf("%d\n",i);
			sayac++;
		}
	}
		printf("Toplam deger %d\n",sayac);
	return 0;	
}
