#include<stdio.h>
#include<stdlib.h>
#include <math.h> 

int main() {
	double sayi,sonuc;
	printf("Sayiyi Girin: ");
	scanf("%lf",&sayi);
	sonuc=fabs(sayi);
	printf("Sonuc: %.lf",sonuc);
	return 0;
}

