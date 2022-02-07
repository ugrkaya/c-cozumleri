/*
BOLUM 12 SORU 9
author: https://github.com/ugrkaya

*******************************************************************************/

#include <stdio.h>
#include <string.h>

unsigned int isPalindrome(char dizi[], char dizi2[]);

int main()

{
    char dizi[]={"aba"};
	char dizi2[]={"aba"};
	strrev(dizi2);
    printf("Dizinin icerigi: ");
    puts(dizi);
	char dizi3[]={"turkiye"};
	char dizi4[]={"turkiye"};
	strrev(dizi4);
    printf("Dizinin icerigi: ");
    puts(dizi3);
 	/* strrev fonksiyonu ANSI standartında değildir. GCC derleyicisi tarafından desteklenmektedir.*/

    if(isPalindrome(dizi,dizi2))
    printf("Dizi icerigi palindromdur.");
    else printf("Dizi icerigi palindrom degildir.");
	putch(10);
    if(isPalindrome(dizi3,dizi4))
    printf("Dizi icerigi palindromdur.");
    else printf("Dizi icerigi palindrom degildir.");
    return 0;
}  
    
unsigned int isPalindrome(char dizi[], char dizi2[]){

	int sonuc;
    if(strcmpi(dizi,dizi2))
    sonuc = 0;
    else sonuc = 1;
    return sonuc;
    

}
