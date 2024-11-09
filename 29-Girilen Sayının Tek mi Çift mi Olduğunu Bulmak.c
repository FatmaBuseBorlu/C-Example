#include<stdio.h>
#include<stdlib.h>

//Girilen sayýnýn tek mi çift mi olduðunu bulmak

int main(){
	
	int sayi,tek,cift;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	

	if(sayi%2==0){
			
		printf("Girdiginiz sayi %d cifttir",sayi);
	}
	else{
		
		printf("Girdiginiz sayi %d tektir",sayi);
	
	}

		
	return 0;
}
