#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,sayi;
	int toplam=0;
	
	for(i=1;i<=4;i++){
	printf("Lutfen %d.sayiyi giriniz:",i);
	scanf("%d",&sayi);
	toplam=toplam+sayi;
	}
	printf("Dort sayinin toplami %d'dir",toplam);
	return 0;
}
