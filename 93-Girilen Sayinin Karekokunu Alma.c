#include<stdio.h>
#include <math.h> 

int main() {
	
   int sayi;
   double karekok;
   
   printf("Lutfen sayiyi giriniz: ");
   scanf("%d",&sayi);
   printf("\n");
   if(sayi<1){
   	  printf("Negatif sayinin karekoku alinmaz!\n");
   }
   else{
   karekok=sqrt(sayi); 
   printf("%d Sayisinin Karekoku: %.2f\n",sayi,karekok);
   }
	return 0;
}

