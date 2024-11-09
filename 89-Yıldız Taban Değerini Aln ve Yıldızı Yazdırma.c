#include<stdio.h>
#include<stdlib.h>

int main(){	
	
	int taban,i,j;
	
	printf("Yildiz taban degerini giriniz:");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
