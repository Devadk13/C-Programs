#include <stdio.h>

int main()
{
    int i,j,n,a,upper=1,lower=1;
    
    printf("Enter the number of rows and columns");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            
            if(i<j && a!=0)
            {
                lower=0;
            }
            if(j>i && a!=0)
            {
                upper=0;
            }
            
        }
        
    }
    
    if(upper==1 && lower==1)
    {
        printf("Upper and Lower");
    }
    else if(upper==1)
    {
        printf("Upper");
        
    }
    else if(lower==1)
    {
        printf("Lower");
    }
    else
    {
        printf("Not upper or lower");
    }
}