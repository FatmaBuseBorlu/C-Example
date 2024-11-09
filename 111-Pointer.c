#include<stdio.h>
#include<stdlib.h>

int main(){
 	
 	int sayi=20;
 	int *s=&sayi;
 	char harf='a';
	char *h=&harf;
	//Sayiyi Ekrana Yazdýrma
	printf("Sayi: %d\n",sayi);
	
	//Adresi Ekrana Yazdýrma
	printf("Adres: %x\n",s);

	//Harfi Ekrana Yazdýrma
	printf("Harf: %c\n",harf);
	
	//Adresi Ekrana Yazdýrma
	printf("Adres: %x",h);
	return 0;
}
