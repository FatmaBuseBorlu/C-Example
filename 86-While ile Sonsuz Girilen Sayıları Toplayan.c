#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i;
	int sayi=1;
	int toplam=0;
	
	while (1) {
		
	printf("Lutfen %d.sayiyi giriniz:",sayi);
	scanf("%d",&sayi);
	toplam=toplam+sayi;
	printf("\n");
	printf("Toplam sayi %d'dir\n\n",toplam);
	
	if(sayi==0){	
		break;	
	}
	}
		

	return 0;
}
