/*
author: https://github.com/ugrkaya
BOLUM 11 SORU 5
*//////////////////
	#include <stdio.h>

    int kuvvetHesapla (int sayi, int kuvvet);
    int kareBul (int sayi);
    
    int main (int argc, const char * argv[])
    {
        int sayi,kuvvet;
        printf("Sayi giriniz:");
        scanf("%d",&sayi);
        printf("Ussunu giriniz:");
        scanf("%d",&kuvvet);
        printf("%d ussu %d = %d",sayi,kuvvet,kuvvetHesapla(sayi,kuvvet));
        return 0;
     }
    
    int kuvvetHesapla (int sayi, int kuvvet)
    {
        int i,sayi2;
        sayi2=1;

        if (kuvvet==1)
        return sayi;
        else if(kuvvet==0)
        return 1;
        
        if (kuvvet%2==0)
        {
        for(i=0; i<kuvvet/2; i++)
        {
            sayi2 = sayi2 * kareBul(sayi);
        }
        return sayi2;
        }
        else 
        {
            for(i=0; i<kuvvet/2; i++)
        {
            sayi2 = sayi2 * kareBul(sayi);
            
        }
        return sayi2 = sayi * sayi2;
        }
    }
    int kareBul(int sayi)
    {
        int karesi;
        karesi = sayi * sayi;
        return karesi;
    }