/* bolum 8 soru 2
author: https://github.com/ugrkaya
*/


#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned int sayi1=0;

	
	printf("Bir adet tam sayi giriniz:");
	scanf("%u", &sayi1);
	sayi1 % 2 == 1 ? printf("Girdiginiz sayi tektir.") : printf("Girdiginiz sayi cifttir.") ;
	
	
	
	getchar();
	return 0;
}
