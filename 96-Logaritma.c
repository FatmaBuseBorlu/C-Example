#include<stdio.h>
#include<stdlib.h>
#include <math.h> 

int main() {
	double sayi,sonuc;
	printf("Sayiyi Girin: ");
	scanf("%lf",&sayi);
	sonuc=log(sayi);
	printf("Sonuc Logaritma: %.7lf",sonuc);
	return 0;
}

