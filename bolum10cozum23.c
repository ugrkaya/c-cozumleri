8/*
BOLUM 10 SORU 23
author: https://github.com/ugrkaya */

#include <stdio.h>

int main(int argc, char *argv[])
{	
    int sayilar[10]={25,22,17,19,47,3,98,5,124,10};
    int i,j,swap,aranan;
    printf("\nEn kucuk kacinci sayiyi bulmak istiyorsunuz:");
    scanf("%d", &aranan);

    printf("\nDizi kabarcik siralama algoritmasina gore siralaniyor.");
    for (i=0; i<10; i++){
        for(j=0;j<9; j++){
            if(sayilar[j]>sayilar[j+1]){
                swap = sayilar[j+1];
                sayilar[j+1] = sayilar[j];
                sayilar[j] = swap;
                
            } else {
                continue;
            }
        }
    }
    printf("\nDizideki %d. en kucuk sayi:%d",aranan,sayilar[aranan-1]);
    
	return 0;
}