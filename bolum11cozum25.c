/******************************************************************************
bölüm 11 soru 25

author: https://github.com/ugrkaya
*******************************************************************************/

#include <stdio.h>

int treboniacci(int n);


int main()
{
    
    int n;
    printf("Fibonacci serisindeki kacinci elemani gormek istiyorsunuz:");
    scanf("%d",&n);
     printf("%d. eleman: %d",n,treboniacci(n));
    

    return 0;
}

int treboniacci(int n) {
    
    int i;
    
    
    
    if(n==1 || n==2 || n==3)
    return 1;
    
    
      return treboniacci(n-1) + treboniacci(n-2) + treboniacci(n-3);
}