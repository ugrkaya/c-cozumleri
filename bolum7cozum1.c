/* BOLUM 7 SORU 1
author: https://github.com/ugrkaya
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	int sayi1,sayi2;
	sayi1 = sayi2 = 0;
	printf("Arada bir adet bosluk birakarak Iki adet tam sayi giriniz:");
	scanf("%d %d", &sayi1, &sayi2);
	printf("Girdiginiz \"Birinci\" sayi: %d\nGirdiginiz \"Ikinci\" sayi: %d\n", sayi1, sayi2);
	printf("%d %% %d %d", sayi1, sayi2, sayi1%sayi2);
	getchar();
	return 0;
}
