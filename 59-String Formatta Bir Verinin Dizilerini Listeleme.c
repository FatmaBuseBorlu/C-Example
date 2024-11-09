#include<stdio.h>
#include<stdlib.h>

//string formatta bir verinin dizilerini listelemeye çalýþ foreach araþtýr

int main(){
	char sehirler[][10]={"Bursa","Konya","Izmit","Istanbul"};
	int i;
	
	for(i=0;i<4;i++)
	{

		printf("%s\n",sehirler[i]);
	}			
	return 0;
}

