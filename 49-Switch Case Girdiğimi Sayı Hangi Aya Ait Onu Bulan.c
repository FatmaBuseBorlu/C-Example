#include<stdio.h>
#include<stdlib.h>

//Switch Case Girdiðimi sayý hangi aya denk geliyorsa bunu ekrana yazdýran C kodu

int main()
{	
	int ay;
	
	printf("Lutfen bir ay sayisi giriniz:");
	scanf("%d",&ay);
	
	switch(ay){
		case 1: printf("Ocak");
		break;
		case 2: printf("Þubat");
		break;
		case 3: printf("Mart");
		break;
		case 4: printf("Nisan");
		break;
		case 5: printf("Mayis");
		break;
		case 6: printf("Haziran");
		break;
		case 7: printf("Temmuz");
		break;
	    case 8: printf("Aðustos");
		break;	
    	case 9: printf("Eylül");
		break;
		case 10: printf("Ekim");
		break;
		case 11: printf("Kasým");
		break;
	    case 12: printf("Aralik");
		break;
		default: printf("Hatali Sayi Girdiniz!!");
		break;
	}
	return 0;
}
