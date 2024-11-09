#include<stdio.h>
#include<stdlib.h>

//1 den 50 arasýnda 5'e tam bölünen sayýlarý listeleyen program
int main()
{	
	int i;
	
	for(i=1;i<50;i++)
	{
		if(i%5==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
