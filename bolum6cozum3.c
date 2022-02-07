/* bolum 6 soru 3
author: https://github.com/ugrkaya
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = 5;
	int b;
	
	b = ++a + a++ * --a;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	getchar();
	return 0;
}
