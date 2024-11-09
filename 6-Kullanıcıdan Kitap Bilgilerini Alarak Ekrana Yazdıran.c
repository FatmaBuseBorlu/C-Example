#include<stdio.h>
#include<stdlib.h>

//Kullanýcýdan kitabýn adýný, yazarýný, basým tarihini, basým evini, türünü girmesini istiyoruz.

int main(){
	
	char KitapAd[20],Yazar[20],BasimEv[30],Tur[15];
	int BasimTarihi,SayfaSayisi;
	
	printf("Kitap Adi: ");
	scanf("%s",KitapAd);
	
	printf("Yazar: ");
	scanf("%s",Yazar);
	
	printf("Basim Tarihi: ");
	scanf("%d",&BasimTarihi);
	
	printf("Sayfa Sayisi: ");
	scanf("%d",&SayfaSayisi);
	
	printf("Basim Evi: ");
	scanf("%s",BasimEv);
	
	printf("Turu: ");
	scanf("%s",Tur);
	
	printf("\n");
	
	printf("Kitap Adi: %s\nYazar: %s\n",KitapAd,Yazar);
	printf("Basim Tarihi: %d\nSayfa Sayisi: %d\n",BasimTarihi,SayfaSayisi);
	printf("Basim Evi: %s\nTuru: %s\n",BasimEv,Tur);
	
	
	return 0;
}
