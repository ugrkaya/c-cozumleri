/*
BOLUM 10 SORU 19
author: https://github.com/ugrkaya
*/


#include <stdio.h>




int main(int argc, char *argv[])
{	
    int sayi[4]={4,2,9,31};
    int i,swap,j,x;
    printf("Dizinin sirasiz hali:");
    for(j=0;j<4;j++){
    printf("%d,",sayi[j]);
    }
    j = 0;

    
    for(i=0;i<3;i++){
        if (sayi[i]>sayi[i+1]){
            swap = sayi[i];
            sayi[i] = sayi[i+1];
            sayi[i+1] = swap;
            swap = 0; }
            else {
                continue;
            }
        }

    printf("\nDizinin sirali hali:");
    for(j=0;j<4;j++){
    
    printf("%d,",sayi[j]); 
    }
	return 0;
}