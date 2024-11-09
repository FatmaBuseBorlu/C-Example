#include<stdio.h>
#include<stdlib.h>

// 1 ile 20 arasýndaki çift sayýlarý listeleyen ama 14 sayýsýný listelemeyen program 

int main(){	

	int i=1;
	
	for(i=1;i<=20;i++)
	{
		if(i%2==0 && i!=14)
		{
		printf("%d\n",i);
		
		}
	}
		
	return 0;
}
