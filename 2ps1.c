#include<stdio.h>
int main()
{
int num,fact=1,i;
printf("Enter numb");
scanf("%d",&num);
if(num<=20)
{
if(num==0)
printf("1");
else{
for(i=1;i<=num;i++)
fact *=i;
printf("%d",fact);
}
}
return 0;
}
