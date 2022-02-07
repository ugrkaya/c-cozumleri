/* bolum 5 soru 3

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE  5

int main(int argc, const char * argv[]) {
    int i;
	char metin[5];
	printf("5 karekterlik text giriniz:");
	gets(metin);
	printf("buyuk harfler ile yazilmis hali: ");
	for (i=0; i<5; i++) {
		metin[i] = toupper(metin[i]);
	printf("%c",metin[i]);
	}
    getchar();
    
    
    return 0;
	
	}
    
