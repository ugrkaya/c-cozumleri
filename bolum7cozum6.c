/* bolum 7 soru 6
author: https://github.com/ugrkaya
*/


#include <stdio.h>

int main(int argc, char *argv[])
{
	char ad[20];
	char soyAd[20];
	unsigned int yas=0;
	printf("Adinizi soyadinizi ve yasinizi aralarinda bir adet bosluk birakarak giriniz:");
	scanf("%s %s %u", ad, soyAd, &yas);
	
	printf("Adiniz:%s\nSoyadiniz:%s\nYasiniz:%u\n", ad, soyAd, yas);
	
	printf("--------------------------------------\n");
	printf("Merhaba %s %s", ad, soyAd);
printf("\n--------------------------------------\n");
	
	
	
	getchar();
	return 0;
}
