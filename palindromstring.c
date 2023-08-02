#include <stdio.h>

int main()
{
    printf("C program to check whether a string is a palindrome or not\n");
    
    char a[100];
    int flag=0;
    printf("Enter the string\n");
    scanf("%s",a);
    // printf("%s",a);
    
    char b[100];
    int len=0;
    for(int i=0;a[i];i++) //To find the length of the string
    {
        len++;
    }
    
    for(int i=0;a[i];i++) //Converting to lowercase
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]+=32;
        }
    }
    
    // printf("\n%d",len);
    
    for(int i=len-1;i>=0;i--) //copying to another array
    {
        b[len-i-1]=a[i];
    }
    
    for(int i=0;i<len;i++) //checking palindrome condition
    {
        if(b[i]!=a[i])
        {
        flag=1;
        break;
        }
        else
            flag=0;
        
    }
    if(flag==0)
        printf("Its palindrome");
    else
        printf("Not palindrome");
    
    

    return 0;
}
