#include<stdio.h>
#include<stdlib.h>

// 3 sýnav ve 1 proje notu girilen öðrencinin harf aralýklarýna göre çýktýsý

int main(){
	
	int s1,s2,s3,proje,ort;
	
	printf("Lutfen birinci sinav notunuzu giriniz: ");
	scanf("%d",&s1);
	
	printf("Lutfen ikinci sinav notunuzu giriniz: ");
	scanf("%d",&s2);
	
	printf("Lutfen ucuncu sinav notunuzu giriniz: ");
	scanf("%d",&s3);
	
	printf("Lutfen proje notunuzu giriniz: ");
	scanf("%d",&proje);
	
	ort=(s1+s2+s3+proje)/4;
	printf("Ortalamaniz %d\n",ort);
	
	if(ort<50){
		printf("Ortalamaniz %d oldugu icin FF ile kaldiniz!",ort);
	}
	if(ort>=50 && ort<60){
		printf("Ortalamaniz %d oldugu icin DD",ort);
	}
	if(ort>=60 && ort<70){
		printf("Ortalamaniz %d oldugu icin CC",ort);
	}
	if(ort>=70 && ort<85){
		printf("Ortalamaniz %d oldugu icin BB",ort);
	}
	if(ort>85){
		printf("Ortalamaniz %d oldugu icin AA",ort);
	}
	
	return 0;
}
