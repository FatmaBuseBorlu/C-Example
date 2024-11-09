#include<stdio.h>
#include<stdlib.h>

int main(){
	int dizi[100];
	int i,sayi;
	printf("Eleman Sayisi:");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("Dizinin %d. degerini girin: ",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("\n");
	
		for(i=0;i<sayi;i++)
	{
		printf("Dizinin degeri %d\n",dizi[i]);
	}
	return 0;
}
