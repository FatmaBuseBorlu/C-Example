#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int sayi1,sayi2,toplam;
	
	printf("Lutfen birinci sayiyi giriniz: ");
	scanf("%d",&sayi1);
	
	printf("Lutfen ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);
	
	toplam=sayi1+sayi2;
	
	if(toplam>=50){
		
		printf("Degeriniz: %d\nToplam deger 50 den buyuktur.",toplam);
	}
	
	else{
		printf("Toplam deger 50 den kucuktur ");
	}
	
	return 0;
}
