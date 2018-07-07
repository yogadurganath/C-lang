#include <stdio.h>
#include<string.h>
int main(void)
{
char r[7];
int i,k,length,n[7];
scanf("%[^\n]s",r);
length=strlen(r);
for(i=0;i<length;i++)
{
	if(r[i]=='I')
	n[i]=1;
	else if(r[i]=='V')
	n[i]=5;
	else if(r[i]=='X')
	n[i]=10;
	else if(r[i]=='L')
	n[i]=50;
	else if(r[i]=='C')
	n[i]=100;
	else if(r[i]=='D')
	n[i]=500;
	else if(r[i]=='M')
	n[i]=1000;
	else
	printf("invalid");
}
k=n[length-1];
for(i=length-1;i>0;i--)
{
	if(n[i]>n[i-1])
	k=k-n[i-1];
	else
	k=k+n[i-1];
}
printf("%d",k);
	return 0;
}
