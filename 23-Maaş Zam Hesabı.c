#include<stdio.h>
#include<stdlib.h>

// Aylýk 8500 TL maaþ alan kiþinin maaþýna yüzde 12 zam yapýlýrsa 

	int main(){ 
	float maas,yenimaas;
	
	printf("***** Maas Zam Hesabi ***** \n\n");
	printf("Lutfen maasinizi giriniz: ");
	scanf("%f",&maas);
	
	yenimaas=maas+maas*12/100;
	
	printf("Yapilan zamdan sonra maasiniz: %f",yenimaas);
	
	return 0;
}
