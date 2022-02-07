/* bolum 9 soru 6
author: https://github.com/ugrkaya
*/
#include <stdio.h>



int main(int argc, char *argv[])
{
	int sayi,i;
	int sonuc = 0;
	sayi=0;

	
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	for	(i = 1; 3*i< sayi; i++)
{
	sonuc = 3 * i;
	printf("%d\n", sonuc);
	
	
}	

	printf("Program sonlandi.");
	
	getchar();
	return 0;
}
