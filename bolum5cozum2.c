/* bolum 5 soru 2

author: https://github.com/ugrkaya
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE  50

int main(int argc, const char * argv[]) {
    char metin[SIZE];

   
    printf("buyuk harfle metin giriniz:");
    gets(metin);

    printf("metnin kucuk harflere cevirilmis hali: ");

    int i;
    for (i = 0; i < SIZE; i++) {
        if (metin[i] == '\0')
            break;
		if (metin[i] >= 97) {
			
			printf("%c", metin[i]);
		}
        if (metin[i] <= 90) {
            printf("%c", metin[i]+32);
        }
    }
    
    printf("\n");
    getchar();
    
    
    return 0;
}


