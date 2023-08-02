/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    char a[100];
    int ucount[26]={0};
    int lcount[26]={0};
    scanf("%[^\n]",a);
    printf("%s\n",a);
    
    for(int i=0;a[i];i++)
    {
        
        if(a[i]>=65 && a[i]<=90)
        {
            ucount[a[i]-65]++;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            lcount[a[i]-97]++;
        }
        
    }
    
    for(int i=0;i<26;i++)
    {
         if(ucount[i]>1)
        printf("%c --%d\n",i+65,ucount[i]);
         if(lcount[i]>1)
        printf("%c --%d\n",i+97,lcount[i]);
    }
    
   
}
