#include<stdio.h>
#include<stdlib.h>

int main(){
	
	//Karenin alaný ve cevresini veren
	//Dikdörtegnin alaný ve çevresini veren
	
	int kenar1,kenar2,KareAlan,KareCevre,DikdortgenAlan,DikdortgenCevre;
	
	kenar1=12;
	kenar2=8;
	KareAlan=kenar1*kenar1;
	KareCevre= kenar1*4;
	DikdortgenAlan=kenar1*kenar2;
	DikdortgenCevre=(kenar1+kenar2)*2;
	
	printf("Karenin Alani: %d\n",KareAlan);
	printf("Karenin Cevresi: %d\n",KareCevre);
	printf("Dikdortgen Alani: %d\n",DikdortgenAlan);
	printf("Dikdorgen Cevresi: %d",DikdortgenCevre);
	
	return 0;
}
