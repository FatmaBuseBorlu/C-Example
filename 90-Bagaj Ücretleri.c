#include<stdio.h>
#include<stdlib.h>
// el için 8 kg normal için 1 kg bagaj hakký . el haklarýný geçerse kg baþý 4 tl normal hakký geçerse 5 tl el 
// ve normal bagaj ücreti giren kullanýcýnýn ödeyeceði ücret ne olur.
int main(){
	
	int elB,normalB,ynormalB,yelB,toplam;
	
	printf("Lutfen el bagaj kg giriniz:");
	scanf("%d",&elB);
	
	printf("Lutfen normal bagaj kg giriniz:");
	scanf("%d",&normalB);
	
	if(elB>=8 || normalB>=15){
		
		yelB=(elB-8)*4;
		ynormalB=(normalB-15)*5;
		toplam=yelB+ynormalB;
		printf("Odemeniz gereken ekstra ucret: %d TL",toplam);
	}
		
	else {
		
		printf("Odemeniz gereken ekstra ucret bulunmamaktadir.");
	}
	return 0;
}
