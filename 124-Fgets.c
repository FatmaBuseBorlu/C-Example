#include<stdio.h>
#include<stdlib.h>


    int main(){
	
	FILE *dosya;
	char karakter[50];
	dosya=fopen("C:\\txt\\bilgi2.txt","r");
	fgets(karakter,50,dosya);
	puts(karakter);
	fclose(dosya);	
    return 0;
}

 
