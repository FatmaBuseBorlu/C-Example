#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float sayi1,sayi2,toplam;
	
	printf("Lutfen birinci sayiyi giriniz: ");
	scanf("%f",&sayi1);
	
	printf("Lutfen ikinci sayiyi giriniz: ");
	scanf("%f",&sayi2);
	
	toplam=sayi1+sayi2;	
	printf("Toplama Sonucu: %f",toplam);
	
	return 0;
}
