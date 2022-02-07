/*
bolum 10 soru  20
author: https://github.com/ugrkaya */

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

    for(i=0; i<3; i++){
    for(j=0;j<3;j++){
        if (sayi[j]<sayi[j+1]){
            swap = sayi[j+1];
            sayi[j+1] = sayi[j];
            sayi[j] = swap;
            swap = 0; }
          
        }
    }
j=0;
    printf("\nDizinin sirali hali:");
    for(j=0;j<4;j++){
    
    printf("%d,",sayi[j]); 
    }
	return 0;
}