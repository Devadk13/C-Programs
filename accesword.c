#include <stdio.h>

int main()
{
    
    char a[100];
    scanf("%[^\n]s",a);
    int start=0;
    int end=0;
    
    void rev(char a[],int start,int end)
    {
        for(int i=end;i>=start;i--)
        {
            printf("%c",a[i]);
        }
        printf("\n");
    }
    
    
    for(int i=0;a[i];i++)
    {
        if(a[i]==' ')
        {
            rev(a,start,end-1);
            // for(int k=start;k<=end-1;k++)
            //     printf("%c",a[k]);   //position to access the word
            // printf("\n");
            start=i+1;
            end++;
        }
        else
        {
            if(a[i+1]=='\0')
                a[i+1]=' ';
            end++;
        }
    }
    
   
}
