#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int s1,s2,s3,ort;
	
	printf("******** Ortalama Hesabi ********\n\n");
	printf("Lutfen birinci sinavi giriniz: ");
	scanf("%d",&s1);
	
	printf("Lutfen ikinci sinavi giriniz: ");
	scanf("%d",&s2);

	printf("Lutfen ucuncu sinavi giriniz: ");
	scanf("%d",&s3);
	
	ort= (s1+s2+s3)/3;
	
	printf("Ortalama Hesabi: %d\n", ort);
	
	return 0;
}
