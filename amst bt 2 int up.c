#include <stdio.h>
#include <math.h>
int main()
{
    int num, lastDigit, digits, sum, i,n1,n2,c=0;
    scanf("%d%d",&n1,&n2);
    for(i=n1+1; i<n2; i++)
    {
        sum = 0;
        num = i;
        digits = (int) log10(num) + 1;
        while(num > 0)
        {
            lastDigit = num % 10;
            sum = sum + ceil(pow(lastDigit, digits));
            num = num / 10;
        }
        if(i == sum)
        {
            if(c==0)
            {printf("%d", i);
            c++;}
            else
             printf(" %d", i);
        }
    }
    return 0;
}
