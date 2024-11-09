#include<stdio.h>
#include<stdlib.h>

// Çemberde alan: pi * r* r
// Çemberde çevre: 2 * pi * r

int main(){
	
	printf("***** Cemberde Alan ve Cevre Hesabi *****");
	printf("\n\n");	
	
	float yaricap,pi,alan,cevre;
	pi= 3.14;
	
	printf("Lutfen yaricapi giriniz: ");
	scanf("%f",&yaricap);
	
	alan= pi * yaricap * yaricap;
	cevre= 2 * pi * yaricap;
	
	printf("Alan: %f\nCevre: %f",alan,cevre);
	
	return 0;
}
