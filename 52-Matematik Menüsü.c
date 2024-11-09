#include<stdio.h>
#include<stdlib.h>

int main(){	
	
	int sayi1,sayi2,secim;
	float pi=3.14;
	float sonuc;
	
	sayi1=12;
	sayi2=16;
	
	printf("\n");
	printf("         Matematik Menusu\n");
	printf("**********************************\n\n");
	
	printf("1)Kare de Alan ve Cevre Hesabi\n");
	printf("2)Girilen Sayinin Kupu\n");
	printf("3)Cemberde Alan ve Cevre\n");
	printf("4)5x2+7x+9 x'e göre Islem Sonucu\n");
	printf("5)Dikdortgen Alan ve Cevre Hesabi\n\n");
	
	printf("Isleminizi Seciniz: ");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1: 
			printf("\n");
			sonuc=sayi1*sayi1;
			printf("Karenin Alani: %.f\n",sonuc);
			
			sonuc=sayi1*4;
			printf("Karenin Cevresi: %.f",sonuc);
		break;
			
		case 2:
			printf("\n");
			sonuc=sayi1*sayi1*sayi1;
			printf("Sayinin Kupu: %.f\n",sonuc);
		break;
			
		case 3:
			printf("\n");		
			sonuc=pi*sayi1*sayi1;
			printf("Cemberin Alani: %.2f\n",sonuc);
			
			sonuc=2*pi*sayi1;
			printf("Cemberin Cevresi: %.2f\n",sonuc);

		break;
			
		case 4:
			printf("\n"); 
			sonuc= (5*sayi1*sayi1)+(7*sayi1)+9;
			printf("Islemin Sonucu: %.f\n",sonuc);
		break;
			
		case 5:
			printf("\n");			
			sonuc=sayi1*sayi2;
			printf("Dikdortgen Alani: %.f\n",sonuc);
			
			sonuc=2*(sayi1+sayi2);
			printf("Dikdortgen Cevresi: %.f\n",sonuc);

		break;
			
	}
	return 0;
}
