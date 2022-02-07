/******************************************************************************
bölüm 11 soru 23

author: https://github.com/ugrkaya
*******************************************************************************/

#include <stdio.h>

int fibonacci(int n);


int main()
{
    
    int n;
    printf("Fibonacci serisindeki kacinci elemani gormek istiyorsunuz:");
    scanf("%d",&n);
     printf("%d. eleman: %d",n,fibonacci(n));
    

    return 0;
}

int fibonacci(int n) {
    
    int i;
    
    
    
    if(n==1 || n==2)
    return 1;
    
    
      return fibonacci(n-1) + fibonacci(n-2);
}