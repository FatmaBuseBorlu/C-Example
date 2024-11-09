#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int sayi1,sayi2,topla,cikar,bol,carp;
	
	sayi1=40;
	sayi2=3;
	
	topla= sayi1+sayi2;
	cikar=sayi1-sayi2;
	bol=sayi1/sayi2;
	carp=sayi1*sayi2;
	
	printf("Toplama Sonucu: %d\nCikarma Sonucu: %d\nBolme Sonucu: %d\nCarpma Sonucu: %d",topla,cikar,bol,carp);
	
	return 0;
}
