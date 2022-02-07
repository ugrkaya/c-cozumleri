/* bolum 6 soru 2 
author: https://github.com/ugrkaya
*/



#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned int sayi1;
	unsigned int sayi2;
	unsigned int bolum;
	unsigned int kalan;
	printf("1. sayiyi giriniz:");
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz:");
	scanf("%d", &sayi2);
	bolum = sayi1 / sayi2;
	kalan = sayi1 % sayi2;
	printf("1. ve 2. sayilarinin birbirlerine bolumlerinden, bolum:%d kalan:%d", bolum, kalan);
   getchar();
   return 0;
}
