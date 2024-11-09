#include<stdio.h>
#include<stdlib.h>

//t=Türkçe, m= Matematik, s=Sosyal Bilgiler, f=Fen Bilgisi

int main()
{	
	char ders;
	
	printf("Ders kodunu giriniz:");
	scanf("%s",&ders);

	switch(ders)
	{
		case 't': printf("Turkce");
		break;
		case 'm': printf("Matematik");
		break;
		case 's': printf("Sosyal Bilgiler");
		break;
		case 'f': printf("Fen Bilimleri");
		break;
		default: printf("Hatali kod girdiniz!!");
		break;
	}

	return 0;
}
