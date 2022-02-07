/* bolum  8 soru 10
author: https://github.com/ugrkaya
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char *argv[])
{
	srand(time(NULL));
	int sayi1 = (rand() % 6) + 1;
	int sayi2 = (rand() % 6) + 1;
	printf("Birinci zar:%d\n",sayi1);
	printf("Ikinci zar:%d\n",sayi2);
	printf("-------------------------------------------\n");
	if ( sayi1 == sayi2 ) {
		printf("Cift zar attiniz. Helal");
	}
	getchar();
	return 0;
}
