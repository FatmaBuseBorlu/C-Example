#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sayi,kup;
	
	printf("Lutfen sayiyi giriniz:");
	scanf("%d",&sayi);
	
	kup=sayi*sayi*sayi;
	printf("Girilen degerin kupu %d'dir ",kup);
	return 0;
}
