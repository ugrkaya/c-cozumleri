/* bolum 6 soru 5
author: https://github.com/ugrkaya
*/


#include <stdio.h>

int main(int argc, char *argv[])
{
	 int  sayi1, sayi2;
	sayi1 = sayi2 = 0;
	printf("1. Sayiyi giriniz:");
	scanf("%d", &sayi1);
	printf("2. Sayiyi giriniz:");
	scanf("%d", &sayi2);
	if (sayi1 == sayi2)
		printf("Sayilar esit");
	else
	printf("Buyuk olan sayi:%d", (sayi1 > sayi2) ? sayi1 : sayi2);
	getchar();
	return 0;
}
