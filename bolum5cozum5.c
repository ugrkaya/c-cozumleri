/* bolum 5 soru 5
author: https://github.com/ugrkaya
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char *argv[]) {
	
	int i=0;
	char metin[10];
	char metin2[10];
	printf("10 karakterlik text giriniz: ");
	gets(metin);
	for(i=0; i<10; i++){
		if (48 <= metin[i] <=57)  {
			static int toplam;
			int toplam2;
			toplam=atoi(metin[i]);
		printf("metindeki sayilarin toplami:%d", toplam); }
			else {
				printf("metinde sayi yok");
			}	
	}
			
			
		getchar();
		return 0;
		}
		