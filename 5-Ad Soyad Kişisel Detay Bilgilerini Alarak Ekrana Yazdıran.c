#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char Ad[10],Soyad[10],Yas[2],Sehir[13],Meslek[10];
	
	printf("Adiniz: ");
	scanf("%s",Ad);
	
	printf("Soyadiniz: ");
	scanf("%s",Soyad);
	
	printf("Yasiniz: ");
	scanf("%s",Yas);
	
	printf("Sehriniz: ");
	scanf("%s",Sehir);
	
	printf("Mesleginiz: ");
	scanf("%s",Meslek);
	
	printf("\n");
	
	printf("Ad Soyad: %s %s\n",Ad,Soyad);
	printf("Yasi: %s\nSehir: %s\nMeslek: %s",Yas,Sehir,Meslek);
	
	
	return 0;
}
