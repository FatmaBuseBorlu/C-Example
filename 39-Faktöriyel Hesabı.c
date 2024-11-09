#include<stdio.h>
#include<stdlib.h>


int main(){

	int i;
	int sayi;
	int faktoriyel=1;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
		
		faktoriyel=faktoriyel*i;
	}
	printf("Faktoriyel Sonucu: %d",faktoriyel);
	return 0;
}
