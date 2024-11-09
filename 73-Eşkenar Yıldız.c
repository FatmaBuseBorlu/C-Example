#include <stdio.h>
#include<stdlib.h>

// * ,**,***,****,***** alt alta olucak bunlar

int main(){
	
	int deger,i,j;
	
	deger=5;
	
	for(i=2;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i-1;j++) 
		{
            printf("*");
            
            if (j<i-1) 
			{
                printf(" "); // Yýldýzlar arasýnda boþluk býrak
            }
		}
	printf("\n");
	}
return 0;
}

