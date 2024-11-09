#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    enum sehirler
    {
        sehir,adana,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir	
    };

int main() {
	
	enum sehirler il;
	il=ankara;
	printf("%d",il);

	return 0;
}

