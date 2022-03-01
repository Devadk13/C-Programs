#include <stdio.h>

int main()
{
    printf("PROGRAM TO FIND THE LENGTH OF  LONGEST INCREASING SUBSEQUENCE\n");
    int prev,curr;
    int len=0;
    int maxlen=0;
    
    scanf("%d",&prev);
    
    if(prev!=-1)
    {
        len=1;
        maxlen=1;
        scanf("%d",&curr);
        while(curr!=-1)
        {
            
            if(prev<curr)
            {
                len++;
                
            }
            else
            {
                if(maxlen<len)
                {
                    maxlen=len;
                }
                len=1;
            }
            prev=curr;
            scanf("%d",&curr);
        }
        if(maxlen<len)
        {
            maxlen=len;
        }
        printf("%d",maxlen);
        
    }
    
    
    
}
