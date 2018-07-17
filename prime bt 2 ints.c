#include <stdio.h>
int main()
{
int n1,n2,i,num, count,space=0;
scanf("%d%d",&n1,&n2);
  for(num = n1+1; num < n2; num++)
  {
    count = 0;
    for (i = 2; i <= num/2; i++)
    {
  	if(num%i == 0)
  	{
     	  count++;
  	  break;
	}
    }

        if(count == 0 && num != 1 )
        {
            if(space==0)
            {
               printf("%d", num);
               space++;
            }
        else{
            printf(" %d", num);
            }
        }
  }
  return 0;
}
