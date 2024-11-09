#include<stdio.h>
#include<stdlib.h>

// Kullanýcýdan birinci sýnavý, ikinci sýnavýný, üçüncü sýnavýný ve proje notunu isteyen ve bu bilgileri aldýktan sonra ortalamalarýný hesaplama

int main(){
	
	int s1,s2,s3,proje,ortalama;
	
	printf("Lutfen birinci sinavinizi giriniz: ");
	scanf("%d",&s1);
	
	printf("Lutfen ikinci sinavinizi giriniz: ");
	scanf("%d",&s2);
	
	printf("Lutfen ucuncu sinavinizi giriniz: ");
	scanf("%d",&s3);
	
	printf("Lutfen projeyi giriniz: ");
	scanf("%d",&proje);
	
	ortalama=(s1+s2+s3+proje)/4;
	
	printf("Ortalamaniz: %d",ortalama);
	
	return 0;
}
