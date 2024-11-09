#include<stdio.h>
#include<stdlib.h>

    void dortgen(int kisa,uzun){
    	int i,j;
    	for(i=0;i<uzun;i++){
    		for(j=0;j<kisa;j++){
    			printf("*");
			}
			printf("\n");
		}	
    	return dortgen;
	}
	int main(){
	dortgen(4,10);	
	return 0;
}
