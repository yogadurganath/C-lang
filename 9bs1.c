#include<stdio.h>
int main()
{
int arr[10],n,k,i,sum=0;
printf("Enter numbers n and k");
scanf("%d%d",&n,&k);
printf("Enter %d elements",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<k;i++)
sum=sum+arr[i];
printf("%d",sum);
return 0;
}
