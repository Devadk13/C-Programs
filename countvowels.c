#include <stdio.h>

int main()
{
    printf("C program to count vowels,consonants,digits and special characters in a string\n");
    
    char a[100];
    int v=0,c=0,d=0,s=0;
    printf("Enter the sentence\n");
    scanf("%[^\n]",a);
    
    for(int i=0;a[i]!='\0';i++) //To Lowercase
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]+=32;
        }
    }
    
    for(int i=0;a[i];i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            {
            v++;
            
            }
            else
                c++;
                
        }
            
        else if(a[i]>='0' && a[i]<='9')
        {
            d++;
        }
        else
        {
            s++;
        }
        
    }
    printf("v--c--d--s\n");
    printf("%d--%d--%d--%d",v,c,d,s);
    
    
    
    
    
    
}
