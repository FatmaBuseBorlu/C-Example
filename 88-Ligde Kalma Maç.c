#include<stdio.h>
#include<stdlib.h>

int main(){	
	int skor[10]={1,1,0,0,2,0,1,2,1,0};
	int i;
	int puan=0;
	for(i=0;i<10;i++){
		
		if(skor[i]==2){
			puan=puan+3;
		}

		if(skor[i]==0){
			puan=puan+1;
		}
	}
	if(puan>=12){
		printf("Puaniniz: %d lig de kaldiniz.",puan);
		
	}
	
	else{
		printf("Puaniniz: %d ligden dustunuz.",puan);
	}
	return 0;
}
