#include<stdio.h>
#include<stdlib.h>

int main(){
	// YGS Puan Hesaplama
	
	//Türkçe= 1.999, Matematik= 3.998, Sosyal Bilgiler= 1, Fen= 2.999, Taban= 100.160
	
	float Turkce,Mat,Sos,Fen,Taban,ToplamPuan;
	Taban= 100.160;
	
	printf("Turkce Netiniz: ");
	scanf("%f",&Turkce);
	
	printf("Matematik Netiniz: ");
	scanf("%f",&Mat);
	
	printf("Sosyal Netiniz: ");
	scanf("%f",&Sos);
	
	printf("Fen Netiniz: ");
	scanf("%f",&Fen);
	
	ToplamPuan= Turkce*1.999+Mat*3.998+Sos*1+Fen*2.999+Taban;
	
	printf("YGS Puan Sonucunuz: %f",ToplamPuan);
	
	return 0;
}
