#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int sayi1, sayi2,toplam,fark,carpim;
	printf("Birinci Sayiyi Giriniz:");
	scanf("%d",&sayi1);
	
	printf("Ikinci Sayiyi Giriniz:");
	scanf("%d",&sayi2);
	
	toplam= sayi1+sayi2;
	fark=sayi1-sayi2;
	carpim= sayi1*sayi2;
	
	printf("Girmis Oldugunuz Sayilarin Toplami: %d\n", toplam);
	printf("Girmis Oldugunuz Sayilarin Farki: %d\n", fark);
	printf("Girmis Oldugunuz Sayilarin Carpimi: %d", carpim);
	
	return 0;
}
