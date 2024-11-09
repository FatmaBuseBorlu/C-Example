#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int sayi;
	
	printf("Lutfen sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi%3==0 && sayi%5==0){
		printf("Girilen sayi 3 ve 5 tam bolunuyor.");
		
	}
	else{
		printf("Girilen sayi 3 ve 5 tam bolunmez!");
	}
	return 0;
}
