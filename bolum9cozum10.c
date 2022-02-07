/* bolum 9 soru 10
author: https://github.com/ugrkaya
*/

#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[])
{
	int sayi = 0;
	int i = 0;
	int k = 1;
	int x = 1;
	int y = 0;
	int j = 0;
	printf("Sayi giriniz:");
	fflush(stdin);
	scanf("%d",&sayi);
	j = sayi - 1;
	while (k<=sayi) {
		while(i<k){
		printf("*");
		i++;
		}
		i = 0;
		printf("\n");
		k++;
	}		
	while (x<=sayi-1) {
		while(y<j){
		printf("*");
		y++;
		}
		y = 0;
		j >= 1 ? j-- : j;
		printf("\n");
		x++;
	}		
	
	
	
	printf("\nProgram sonlandi.");
	getchar();
	return 0;
}
 