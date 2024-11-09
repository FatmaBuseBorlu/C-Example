#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int bakteri,i;
	
	printf("Lutfen bakteri sayisini giriniz:");
	scanf("%d",&bakteri);
	
	for(i=1;i<=24;i++){
		
		bakteri=bakteri*2;
		
	}
	printf("Bakteri sayisi %d",bakteri);

	return 0;
}
