#include<stdio.h>
#include<stdlib.h>

// Yýldýzlarla þekil çizdirme i burada adýmlara tutuyor j ise her adýmda kaç yýldýz çizdireceðini gösteriyor

int main(){
	
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}	
		printf("\n");
	}
	return 0;
}
