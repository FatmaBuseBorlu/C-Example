#include<stdio.h>
#include<stdlib.h>

 int kupbul(int sayi){
 	
 	int sonuc=sayi*sayi*sayi;
 	return sonuc;
 }
int main(){
	
	int s;
	printf("Lutfen Sayiyi Giriniz: ");
	scanf("%d",&s);
	printf("\n\n Sonuc: %d",kupbul(s));
		
	return 0;
}
