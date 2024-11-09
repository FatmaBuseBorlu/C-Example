#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int m1[2][3],m2[2][3],toplam[2][3],i,j;
	
	printf("1. Matrisi Girin\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("[%d][%d] --> ",i,j);
			scanf("%d",&m1[i][j]);
		}	
	}
	
	printf("\n\n2. Matrisi Girin\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("[%d][%d] --> ",i,j);
			scanf("%d",&m2[i][j]);
		}	
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			toplam[i][j] = m1[i][j] + m2[i][j];
		}	
	}
	
	printf("\nTOPLAM MATRISI\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ",toplam[i][j]);
		}
		printf("\n");	
	}
	return 0;
}


