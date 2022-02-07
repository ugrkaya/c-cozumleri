/******************************************************************************
BOLUM 12 SORU 12
author: https://github.com/ugrkaya

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isAnagramIgnoreCase(char dizi1[], char dizi2[]);


int main()
{

    char dizi1[9] = "KALEM";  
    char dizi2[9] = "kelam";
    printf("1.dizi:");
    puts(dizi1);
    printf("2.dizi:");
    puts(dizi2);
    
    if(isAnagramIgnoreCase(dizi1,dizi2))
    printf("\nDiziler birbirlerinin anagramıdır.");
    else printf("\nDiziler birbirlerinin anagramı degildir.");
    

    return 0;    
    
    
}

int isAnagramIgnoreCase(char dizi1[], char dizi2[]) {
    
        int uzunluk1,uzunluk2;
        uzunluk1 = strlen(dizi1);
        uzunluk2 = strlen(dizi2);
        
        if(uzunluk1 != uzunluk2)
        return  0;
        
        int i,j;
        int sonuc = 1;
        for(i=0; i<uzunluk1; i++){
        for(j=0; j<uzunluk1; j++){
        if (tolower(dizi1[i]) == tolower(dizi2[j]))
        break;   
        else if (j != 7) continue; else { sonuc = 0; return sonuc; }
        }
        for(j=0; j<uzunluk1; j++){
        for(i=0; i<uzunluk1; i++){
        if (tolower(dizi2[j]) == tolower(dizi1[i]))
        break;   
        else if (i != 7) continue; else { sonuc = 0; return sonuc; }
        }
        if (sonuc!=1){
        sonuc=0;
        return sonuc;
        break;
        }
        }
        return 1;
        
    
    
    
}
}
