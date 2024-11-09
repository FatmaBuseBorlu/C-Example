#include<stdio.h>
#include<stdlib.h>
#include <math.h> 

int main() {
	int taban,us;
	int sonuc;
	printf("Lutfen Taban Degerini Giriniz:");
	scanf("%d",&taban);
	
	printf("Lutfen Us Degerini Giriniz:");
	scanf("%d",&us);
  
  	sonuc=pow(taban,us);
  	printf("Sonuc: %d ",sonuc);
	return 0;
}

