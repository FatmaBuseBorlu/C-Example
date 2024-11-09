#include <stdio.h>
#include<stdlib.h>

// Yýldýzlarla þekil çizdirme i burada adýmlara tutuyor j ise her adýmda kaç yýldýz çizdireceðini gösteriyor

int main(){
	
	int i,j,en,boy;	
	
	printf("Lutfen en degerini giriniz: ");
	scanf("%d",&en);
	printf("Lutfen boy degerini giriniz: ");
	scanf("%d",&boy);
	
	for(i=1;i<=boy;i++)
	{
		for(j=1;j<=en;j++){
			printf("*");
		}
		printf("\n");
	}

}
