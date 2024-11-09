#include<stdio.h>
#include<stdlib.h>

// Klavyeden girilen dereceye göre suyun durumunu kodlayýn

int main(){
	
	printf("***** Suyun Durumu *****");
	printf("\n\n");
	int su;
	
	printf("Lutfen su sicaklik degerini girin: ");
	scanf("%d",&su);
	
	if(su<=0){
		
		printf("Su buz halinde");
	}
	if(su>0 && su<100){
		
		printf("Su sivi halinde");
	}
	if(su>=100){
		
		printf("Su buhar halinde");
	}
	
	return 0;
}
