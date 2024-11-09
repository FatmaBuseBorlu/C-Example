#include<stdio.h>
#include<stdlib.h>

int main(){
	char sehir[3][15];	
	int i;
	
	//Kullanýcýdan þehir isimlerini alma
	for(i=0;i<3;i++)
	{
		printf("Lutfen bir sehir adi giriniz:");
		scanf("%s",&sehir[i]);
	}
	//Sehir isimlerini listeleme
	for(i=0;i<3;i++) 
	{
		printf("%s\n",sehir[i]);
	}
	return 0;
}
