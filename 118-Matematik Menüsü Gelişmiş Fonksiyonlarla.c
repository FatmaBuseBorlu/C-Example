#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void listele(int*sayi1, int*sayi2);
			
    int main(){
    	
	int islem,sonuc;
	int sayi1,sayi2;
	char devam;
	
	while(1){
	printf("********** MATEMATIK MENUSUNE HOSGELDINIZ **********");
	printf("\n\n");
	printf("1- Toplama Islemi\n");
 	printf("2- Cikarma Islemi\n");
 	printf("3- Carpma Islemi\n");
 	printf("4- Bolme Islemi\n");
 	printf("5- Karesini Alma Islemi\n");
 	printf("6- Kupunu Alma Islemi\n");
 	printf("7- Denklem Islemi (5X^2+4X+3)\n");
 	printf("8- Karekok Islemi\n");
 	printf("9- Mutlak Deger Islemi\n");
	printf("Lutfen yapma istediginiz islemi secin (1-9): ");
	scanf("%d",&islem);
	printf("\n");

	switch (islem) {
		case 1:
		    listele(&sayi1, &sayi2);		
			sonuc=sayi1+sayi2;
			printf("Sonucunuz: %d",sonuc);
            break;
            
        case 2 :
            listele(&sayi1, &sayi2);
            if(sayi1<sayi2){
            	sonuc=sayi2-sayi1;
			}
			else{
				sonuc=sayi1-sayi2;
			}
            printf("Sonucunuz: %d",sonuc);
            break;

        case 3 :
            listele(&sayi1, &sayi2);
            sonuc=sayi1*sayi2;
            printf("Sonucunuz: %d",sonuc);
            break;
            
        case 4 :
            listele(&sayi1, &sayi2);
            if(sayi2==0){
            	printf("Bölme yapilamaz");
			}
			else{
				sonuc=sayi1/sayi2;
			}
            printf("Sonucunuz: %d",sonuc);
            break;

        case 5 :
            printf("Lutfen sayiyi giriniz: ");
            scanf("%d",&sayi1);
            sonuc=sayi1*sayi1;
            printf("Sonucunuz: %d",sonuc);
            break;

        case 6 :
            printf("Lutfen sayiyi giriniz: ");
            scanf("%d",&sayi1);
            sonuc=sayi1*sayi1*sayi1;
            printf("Sonucunuz: %d",sonuc);
            break;
            
        case 7 :
            printf("Lutfen sayiyi giriniz: ");
            scanf("%d",&sayi1);
            sonuc=5*sayi1*sayi1+4*sayi1+3;
            printf("Sonucunuz: %d",sonuc);
            break;
        
        case 8:
            printf("Lutfen sayiyi giriniz: ");
            scanf("%d", &sayi1);
            if (sayi1 < 0) {
                printf("Negatif sayýnýn karekökü alýnamaz.\n");
            } 
			else {
                printf("Sonucunuz: %.2f\n", sqrt(sayi1)); 
            }
            break;

        case 9:
            printf("Lutfen sayiyi giriniz: ");
            scanf("%d", &sayi1);
            printf("Sonucunuz: %d\n", abs(sayi1)); 
            break;

        default :
            printf("Hatali secim! (1-9) araligindaki sayilari giriniz.\n\n");
            continue;
        }
        printf("\n");
        printf("Devam etmek ister misiniz? (e/h): ");
        scanf(" %c", &devam); 

        if (devam == 'h' || devam == 'H') {
            printf("Programdan cikiliyor...\n");
            break;
        }
    }
     return 0;
}
void listele(int *sayi1, int *sayi2) {
	printf("\n");
    printf("Lutfen Birinci Sayiyi Giriniz: ");
    scanf("%d", sayi1);
    printf("Lutfen Ikinci Sayiyi Giriniz:");
    scanf("%d", sayi2);
    printf("\n");

}

 
