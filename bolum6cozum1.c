/* bolum 6 soru 1
author: https://github.com/ugrkaya
*/

#include <stdio.h>

int main(int argc, char *argv[])
{		

	unsigned int sayi=0;
	printf("Sayi giriniz:");
	scanf("%d", &sayi);
	if( (sayi % 2) == 1)
		
	printf("Girilen sayi tektir.");
	else
	printf("Girilen sayi cifttir.");


   getchar();
   return 0;
}
