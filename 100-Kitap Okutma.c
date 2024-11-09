#include<stdio.h>
#include<stdlib.h>
#include <math.h> 

int main() {
	
	char kitap[40];
	printf("Kitabin Ismi: ");
	scanf("%s",&kitap);
	
	printf("%s",kitap);
	
	printf("\n");
	
	printf("%10s",kitap);
	
	printf("\n");
	
	printf("%20.5s",kitap);
	
}

