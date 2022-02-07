/* bolum 9 soru 5
author: https://github.com/ugrkaya
*/
#include <stdio.h>



int main(int argc, char *argv[])
{
	int sayi,k;
	sayi=0;
	k=1;
	
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	do 
{
	
	printf("%d\n", 3*k);
	k++;
	
}	while	(3*k < sayi);

	printf("Program sonlandi.");
	
	getchar();
	return 0;
}
