/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
    char a[100];
    scanf("%[^\n]",a);
    int num=0;
    char ch[100];
    int k =0;
    
    for(int i=0;a[i];i++)
    {
        
        if(a[i]>=48 && a[i]<=57)
        {
            num=num*10+a[i]-48;
            if((a[i+1]>=97 && a[i+1]<=122)||(a[i+1]=='\0'))
            {
                for(int j=0;j<num;j++)
                {
                    printf("%s",ch);
                }
                // printf("\n%d",num);
                
                for(int j=0;ch[j];j++)
                {
                    ch[j]='\0';
                }
                num=0;
                k=0;
            }
            
        }
        else
        {
            ch[k++]=a[i];
            
            
        }
        
    }
    
    
}
