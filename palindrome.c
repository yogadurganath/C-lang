#include <stdio.h>
int main()
{
   int n, reve = 0, tem;
   scanf("%d",&n);
   tem = n;
   while (tem != 0)
   {
      reve = reve * 10;
      reve = reve + tem%10;
      tem    = tem/10;
   }
   if (n == reve)
      printf("yes");
   else
      printf("no");
   return 0;
}
