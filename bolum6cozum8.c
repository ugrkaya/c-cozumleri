/* bolum 6 soru 8
author: https://github.com/ugrkaya
*/

#include <stdio.h>

int main(unsigned char argc, char** argv)
{
	unsigned char a = 224;
printf("%d\n", a>>2);

a = a << 1;
printf("%d\n", a);

a += a >> 3;
printf("%d\n", a);

	getchar();
	return 0;
}
