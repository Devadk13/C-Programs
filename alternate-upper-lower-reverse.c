#include <stdio.h>

int main()
{
    printf("***************C program to reverse words and alternate upper and lower***********\n");
    char a[100];
    scanf("%[^\n]s",a);
    int start=0;
    int end=0;
    int count=0;
    
    void rev(char a[],int start,int end,int count)
    {
        if(count%2==0)
        {
                for(int i=end;i>=start;i--)
            {
                if(a[i]>=97 && a[i]<=122)
                {
                    printf("%c",a[i]);
                }
                else
                    printf("%c",a[i]+32);
                
            }
            printf("\n");
        }
        else
        {
            for(int i=end;i>=start;i--)
            {
                if(a[i]>=65 && a[i]<=90)
                {
                    printf("%c",a[i]);
                }
                else
                    printf("%c",a[i]-32);
                
            }
            printf("\n");
            
            
        }
    }
    
    
    for(int i=0;a[i];i++)
    {
        if(a[i]==' ')
        {
            count++;
            rev(a,start,end-1,count);
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
