#include<stdio.h>
#include<stdlib.h>

// Girilen sayýnýn faktöriyelini while ile bulan kod

int main()
{	
	int sayi;
	int i=1;
	int fak;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	while(i<=sayi){
		
		fak=fak*i;
		printf("%d\n",i);
		i++;
	}
		printf("Faktoriyel sonucu: %d ",fak);
	return 0;
}
