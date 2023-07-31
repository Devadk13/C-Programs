/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
   printf("Program to Print Prime numbers\n");
   printf("Enter the limit\n");
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
   int count=0;
   while(k)
   {
       if(isPrime(k))
       {
           printf("%d ",k);
           count++;
           
       }
       k++;
       if(count==n)
       break;
   }
   
}
