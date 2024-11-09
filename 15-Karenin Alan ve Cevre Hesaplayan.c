#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int kenar,alan,cevre;
	
	printf("******** Karenin Alan Ve Cevre Hesabi ********\n\n");
	printf("Lutfen kenari giriniz: ");
	scanf("%d",&kenar);
	
	alan=kenar*kenar;
	cevre=kenar*4;
	
	printf("Karenin alani: %d\nKarenin cevresi: %d",alan,cevre);
	
	return 0;
}
