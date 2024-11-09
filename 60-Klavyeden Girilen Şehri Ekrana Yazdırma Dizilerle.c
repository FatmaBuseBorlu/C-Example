#include<stdio.h>
#include<stdlib.h>

int main(){
	char sehir[15];	
	int i;

	for(i=0;i<2;i++)
	{
		printf("Lutfen bir sehir adi giriniz:");
		scanf("%s",&sehir);
		printf("Sehir: %s",sehir);
		printf("\n");
	}

	return 0;
}
