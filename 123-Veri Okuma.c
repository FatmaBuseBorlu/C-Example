#include<stdio.h>
#include<stdlib.h>


    int main(){
	
	FILE *dosya;
	char karakter;
	dosya=fopen("C:\\txt\\bilgi2.txt","r");
	
	do{
	karakter=getc(dosya);
	printf("%c",karakter);
		}
	while(karakter!=EOF);
	fclose(dosya);	
    return 0;
}

 
