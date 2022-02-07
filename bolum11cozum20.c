/*

ref: http://bilgisayarkavramlari.sadievrenseker.com/2009/10/26/ortak-katlarin-en-kucugu-least-common-multiplier/
*/

#include <stdio.h>
int okek(int a,int b){
   return a*b/obeb(a,b);
}
int obeb(int a,int b)
{
   if(b==0)
        return a;
   else
        return obeb(b,a%b);
}
int main()
{
  int n1,n2;
  printf("OKEK bulmak istediginiz iki sayiyi giriniz:");
  scanf("%d %d",&n1,&n2);
  printf(" %d ve %d sayilarinin okek'i %d 'dir",n1,n2,okek(n1,n2));
  return 0;
}