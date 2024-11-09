#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;

    // Üst yarý
    for(i=1;i<=5;i++) {
        // Sol yýldýzlar
        for(j=1;j<=i;j++) {
            printf("*");
        }
        // Boþluklar
        for(j=1;j<=(5 - i)*2;j++) {
            printf(" ");
        }
        // Sað yýldýzlar
        for(j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }

    // Alt yarý
    for(i=5;i>=1;i--) {
        // Sol yýldýzlar
        for(j=1;j<=i;j++) {
            printf("*");
        }
        // Boþluklar
        for(j=1;j<=(5-i)*2;j++) {
            printf(" ");
        }
        // Sað yýldýzlar
        for(j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

