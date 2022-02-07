/* BOLUM 10 SORU 1
author: https://github.com/ugrkaya
*/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int i;
	float toplam = 0;
	float dizi[10]  = {1.2,2.1,3.3,5.0,6.5,7.5,5.4,8.8,9.9,1.0};
	for(i=0; i<10; i++){
	toplam = toplam + dizi[i];
	}
	printf("%.2f",toplam);
	getchar();
	return 0;
}
