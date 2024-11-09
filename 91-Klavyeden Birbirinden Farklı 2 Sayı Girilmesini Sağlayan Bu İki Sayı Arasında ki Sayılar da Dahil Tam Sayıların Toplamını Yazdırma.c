#include<stdio.h>
#include<stdlib.h>
/* klavyeden birbirinden farklý 2 sayý girilmesini saðlayan bu iki sayý arasýnda ki sayýlar da dahil tam sayýlarýn 
 toplamýný hesaplayan C kodu */

int main() {
    int sayi1,sayi2,i;
	int toplam=0;
    
    printf("Lutfen birinci sayiyi giriniz:");
    scanf("%d",&sayi1);
    
    printf("Lutfen ikinci sayiyi giriniz:");
    scanf("%d",&sayi2);
    
    printf("\n");
    
    if(sayi1==sayi2){
    	printf("Ayni sayilari girdiniz!\n\n");
         printf("Lutfen birinci sayiyi giriniz:");
         scanf("%d",&sayi1);
    
         printf("Lutfen ikinci sayiyi giriniz:");
         scanf("%d",&sayi2);
    }     
    	if(sayi1<sayi2){
    		
    		for(i=sayi1;i<=sayi2;i++){
    			printf("%d\n",i);
    			toplam=toplam+i;
			}
			printf("\n");
			printf("Sayilarin toplam degeri: %d",toplam);   
	}
        else{
        	for(i=sayi1;i>=sayi2;i--){
    			printf("%d\n",i);
    			toplam=toplam+i;
			}
			printf("\n");
			printf("Sayilarin toplam degeri: %d",toplam);
        } 
    return 0;
}

