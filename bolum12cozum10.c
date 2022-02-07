/*
BOLUM 12 SORU 10
author: https://github.com/ugrkaya

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

unsigned int isPalindromeIgnoreCase(char dizi[], char dizi2[]);

int main()

{
    char dizi[]={"AnAsTAS mUM saTsana"};
	char dizi1[]={"AnAsTAS mUM saTsana"};
	strrev(dizi1);
    printf("Dizinin icerigi: ");
    puts(dizi);
 	/* strrev fonksiyonu ANSI standartında değildir. GCC derleyicisi tarafından desteklenmektedir.*/

    if(isPalindromeIgnoreCase(dizi,dizi1))
    printf("Dizi icerigi palindromdur.");
    else printf("Dizi icerigi palindrom degildir.");
	putch(10);
    return 0;
}  
    
unsigned int isPalindromeIgnoreCase(char dizi[], char dizi1[]){
	
	int i,uzunluk1,uzunluk2;
    
    uzunluk1 = strlen(dizi);
    uzunluk2 = strlen(dizi1);
    
    if(uzunluk1 != uzunluk2)
    return 0;
	for(i=0; i<uzunluk1; i++) {
    dizi[i] = tolower(dizi[i]);
    dizi1[i] = tolower(dizi1[i]);
	}
	int sonuc;
    if(strcmpi(dizi,dizi1))
    sonuc = 0;
    else sonuc = 1;
    return sonuc;
    

}


