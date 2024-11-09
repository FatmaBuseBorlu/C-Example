#include<stdio.h>
#include<stdlib.h>

//Bir sinemada ücretlendirme þu þekildedir: mýsýr:50 tl,kola:40 tl,su:10 tl,bilet 80 tl

int main(){
	
	int su,kola,bilet,misir,toplam;
	
	printf("Su Adeti: ");
	scanf("%d",&su);
	
	printf("Kola Adeti: ");
	scanf("%d",&kola);
	
	printf("Bilet Adeti: ");
	scanf("%d",&bilet);
	
	printf("Misir Adeti: ");
	scanf("%d",&misir);
	
	toplam= (misir*50+kola*40+bilet*80+su*10);
	printf("Toplam Borcunuz: %d TL...",toplam);
	
	return 0;
}
