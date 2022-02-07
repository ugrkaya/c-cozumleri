/* bolum 8 soru 11
author: https://github.com/ugrkaya
*/
#include <stdio.h>



int main(int argc, char *argv[])
{
	int sayi1,sayi2,sayi3,sonuc;
	sayi1 = sayi2 = sayi3 = sonuc = 0;
	printf("1. sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("2. sayiyi giriniz:");
	scanf("%d",&sayi2);
	printf("3. sayiyi giriniz:");
	scanf("%d",&sayi3);
	sayi1 > sayi2 ? sonuc = sayi1 : sonuc == sayi2;
	sonuc > sayi3 ? printf("Buyuk sayi:%d",sonuc) : printf("Buyuk sayi:%d",sayi3);
	getchar();
	return 0;
}
