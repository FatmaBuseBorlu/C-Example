#include<stdio.h>
#include<stdlib.h>

//Dizileri ekrana yazd�ran C kodu

int main(){
	
	int sayilar[]={10,20,30,40,50,60,70};
	int i;
	
	for(i=0;i<7;i++)
	{
		printf("%d\n",sayilar[i]);	
	}
	
	return 0;
}
