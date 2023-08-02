#include <stdio.h>

int main()
{
    
    char a[100];
    char b[100];
    int flag=0;
    char encrypt[100]={'\0'};
    scanf("%[^\n]",a);
    scanf("%[^\n]",b);
    int use[26]={0};
    for(int i=0;a[i];i++)
    {
        
        if(encrypt[a[i]-97]=='\0' && use[b[i]-97]==0)
        {
            encrypt[a[i]-97]=b[i];
            use[b[i]-97]=-1;
        }
        
        else if(encrypt[a[i]-97]!=b[i])
    {
        flag=1;
        printf("Not Isomorphic");
        break;
    }
    else if(use[b[i]-97]==-1 && encrypt[a[i]-97]!=b[i])
    {
        flag=1;
        printf("Not Isomorphic");
        break;
        
    }
    else
    if(flag==0)
    {
        printf("Isomorphic");
        break;
    }
    
    }
    
   
}
