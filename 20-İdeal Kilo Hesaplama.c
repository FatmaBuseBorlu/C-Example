#include<stdio.h>
#include<stdlib.h>

// (boy-100 +yaþ)/10*0.8 kadýnlar için, erkekler için 0.9

int main(){
	printf("***** Ýdeal Kilo Hesaplama *****\n\n");
	
	float boy,yas,ideal;
	boy=165;
	yas=24;
	ideal=(boy-100 +yas/10)*0.8;
	printf("Ideal Kilonuz: %f",ideal);
 
	return 0;
}
