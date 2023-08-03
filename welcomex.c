#include <stdio.h>

int main()
{
    char a[100];
    int num;
    scanf("%s%n",a,&num);
    
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            if(i==j|| i+j==num+1)
            {
                printf("%c",a[j-1]);
            }
            
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
