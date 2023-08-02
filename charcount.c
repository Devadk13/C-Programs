#include <stdio.h>

int main()
{
    
    char a[100];
    int count[26]={0};
    scanf("%[^\n]s",a);
    
    for(int i=0;a[i];i++)
    {
        
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]+=32;
        }
        count[a[i]-97]++;
    }
    
    for(int i=0;i<26;i++)
    {
        if(count[i]>1)
        printf("%c --%d\n",i+97,count[i]);
    }
    
   
   
   
}
