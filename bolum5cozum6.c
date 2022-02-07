/* bolum 5 soru 6
author: https://github.com/ugrkaya
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
 int a1,a2,a3,a4,a5,a6;
 a1=5;
 a2=6;
 a3=3;
 a4=4;
 a5=2;
 a6=1;
 int toplam=0;
 float yuzde1,yuzde2,yuzde3,yuzde4,yuzde5,yuzde6;
 toplam=a1+a2+a3+a4+a5+a6;
 printf("Sayilarin toplami:%d\n",toplam);
 yuzde1 = 100 * ((float) a1 / (float) toplam);
 yuzde2 = 100 * ((float) a2 / (float) toplam);
 yuzde3 = 100 * ((float) a3 / (float) toplam);
 yuzde4 = 100 * ((float) a4 / (float) toplam);
 yuzde5 = 100 * ((float) a5 / (float) toplam);
 yuzde6 = 100 * ((float) a6 / (float) toplam);
 printf("1. sayi toplamin yuzde:%.2f si.\n", yuzde1);
 printf("2. sayi toplamin yuzde:%.2f si.\n", yuzde2);
 printf("3. sayi toplamin yuzde:%.2f si.\n", yuzde3);
 printf("4. sayi toplamin yuzde:%.2f si.\n", yuzde4);
 printf("5. sayi toplamin yuzde:%.2f si.\n", yuzde5);
 printf("6. sayi toplamin yuzde:%.2f si.\n", yuzde6);


   
   getchar();
   return 0;
}
