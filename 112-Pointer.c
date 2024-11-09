#include<stdio.h>
#include<stdlib.h>

int main(){
 	
 	char harf='k';
 	char *pt=&harf;
 	
 	printf("Adres: %x\n",pt);
 	pt++;
 	printf("Adres: %x\n",pt);
 	pt--;
 	printf("Adres: %x\n",pt);
 	pt=pt+5;
 	printf("Adres: %x",pt);
	return 0;
}
