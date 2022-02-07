/*  
BOLUM 10 SORU 21
author: https://github.com/ugrkaya
*/ 
#include <stdio.h>

int main(int argc, char *argv[])
{	
    int sayiDizisi[10];
    int i,j,swap,aranan;
    for(i=0;i<10;i++){
        printf("Dizinin elemanlarini giriniz. %d. elemani gir:",i+1);
        scanf("%d",&sayiDizisi[i]);
    }
    i=0;
    printf("\nDizi kabarcik siralama algoritmasina gore siralaniyor.");
    for (i=0; i<10; i++){
        for(j=0;j<9; j++){
            if(sayiDizisi[j]>sayiDizisi[j+1]){
                swap = sayiDizisi[j+1];
                sayiDizisi[j+1] = sayiDizisi[j];
                sayiDizisi[j] = swap;
                
            } else {
                continue;
            }
        }
    }
    printf("\nDizi elemanlari icerisinde aramak istediginiz sayiyi giriniz:");
    scanf("%d", &aranan);
    printf("Binary search algoritmasina gore ilgili sayi araniyor.");
    int ortaindis,solindis,sagindis,bulundu;
    sagindis=9;
    bulundu=0;
    solindis=0;
    while(bulundu==0 && solindis<=sagindis){
        ortaindis=(solindis+sagindis)/2;
        if(aranan==sayiDizisi[ortaindis]){
            bulundu=1;
            break;
        } else if(aranan<sayiDizisi[ortaindis]){
            sagindis=ortaindis-1;
        } else if(aranan>sayiDizisi[ortaindis]){
            solindis=ortaindis+1;
        }
    }
    if (bulundu==1) {
        printf("\nAradiginiz eleman sayiDizisi[%d] indisinde bulundu.",ortaindis);
    } else {
        printf("\nAradiginiz eleman dizide bulunamadi.");
    }
    
    
	return 0;
}