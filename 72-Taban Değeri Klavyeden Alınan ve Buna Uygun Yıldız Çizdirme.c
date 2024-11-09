#include <stdio.h>
#include<stdlib.h>

// Dik üçgen oluþturmamýz lazým ilk baþlangýç * yýldýzla baþlayacak taban kýsmýnýn degeri bize kalmýþ

int main(){
	
	int i,j,taban;
	
	printf("Lutfen taban degerini giriniz: ");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++){
			
			printf("*");
		}
	printf("\n");
	}

}
