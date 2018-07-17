#include <stdio.h>
int main()
{
    int n1,n2,i,c=0;
    scanf("%d%d",&n1,&n2);
    for(i=n1+1;i<n2;i++)
    {
        if(c==0)
        {
        if(i%2==0){
            printf("%d",i);
            c++;
        }
        }
        else
        {
                   if(i%2==0)
            printf(" %d",i);
        }
    }
return 0;
}

