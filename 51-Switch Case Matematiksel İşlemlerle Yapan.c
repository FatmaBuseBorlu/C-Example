#include<stdio.h>
#include<stdlib.h>

int main(){	
	
	int sayi1,sayi2,sonuc;
	char islem;
	sayi1=75;
	sayi2=15;
	
	printf("Lutfen islem yapacaginiz sembolu giriniz:");
	scanf("%s",&islem);
	
	switch(islem)	
	{
	case '+':
		 sonuc=sayi1+sayi2;
		 printf("Sonucunuz %d",sonuc);
		 break;
		 
	case '-':
		 sonuc=sayi1-sayi2;
		 printf("Sonucunuz %d",sonuc);
		 break;
		 
	case '*': 
		sonuc=sayi1*sayi2;
    	printf("Sonucunuz %d",sonuc);
    	break;
    	
    case '/':
		sonuc=sayi1/sayi2;
    	printf("Sonucunuz %d",sonuc);
    	break;
    	
    default: printf("Hatali islem sembolu");
    	
	}
	return 0;
}
