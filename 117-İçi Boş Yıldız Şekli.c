#include<stdio.h>
#include<stdlib.h>

    void dortgen(int kisa,int uzun){
    	
    	int i,j;
    	for(i=0;i<uzun;i++){
    		for(j=0;j<1;j++){
    			printf("*");
			}
			for(j=0;j<kisa-2;j++){
				printf(" ");
			}
			for(j=0;j<1;j++){
    			printf("*");
			}
			printf("\n");
		}	
	}
	
	int main(){
		
		int kisa,uzun;
	printf("Lutfen Kisa Kenari Giriniz: ");
	scanf("%d",&kisa);
	printf("Lutfen Uzun Kenari Giriniz: ");
	scanf("%d",&uzun);
	dortgen(kisa,uzun);	
	return 0;
}
