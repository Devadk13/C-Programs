#include <stdio.h>

int main()
{
    int a,b,t,s,r;
    
    printf("****************PROGRAM TO CALCULATE GREATEST COMMON DIVISOR***************\n");
    
    printf("Enter two numbers a and b: \n");
    scanf("%d %d",&a,&b);
    
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    r=a;
    s=b;
    
    while(b!=0)
    {
        t=a;
        
        a=b;
        b=t%b;
        
    }
    
    printf("The Greatest common divisor of %d and %d is %d",r,s,a);
}