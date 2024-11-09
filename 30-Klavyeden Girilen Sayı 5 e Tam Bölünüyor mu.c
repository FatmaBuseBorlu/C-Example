#include<stdio.h>
#include<stdlib.h>

//Klavyeden girilen sayi 5 e tam bölünüyor mu?

int main(){
	int sayi,bolunen;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi%5==0){
		
		printf("%d 5'e tam bolunuyor.",sayi);
	}
	
	else{
		printf("%d 5'e tam bolunmuyor!!",sayi);
	}

	return 0;
}
