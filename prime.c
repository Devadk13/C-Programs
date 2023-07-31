#include <stdio.h>

int main()
{
    int n;
   printf("Program to Print Prime numbers\n");
   printf("Enter the number\n");
   scanf("%d",&n);
   
   
   int flag=0;
  
   int isPrime(int n)
   {
       if(n<=1)
       {
           return 0;
       }
       for(int i=2;i<=n/2;i++)
       {
           if(n%i==0)
           {
               return 0;
           }
       }
       return 1;
   }
   int k=2;
   while(k)
   {
       if(isPrime(k))
       {
           printf("%d ",k);
           
       }
       k++;
       if(k==n)
       break;
   }
   
}
