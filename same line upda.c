#include <stdio.h>
int main()
{
	char s1[2],s2[2],s3[2];
	scanf("%s\n%s\n%s\n",s1,s2,s3);
	if((s1[0]=s2[0]=s3[0])||(s1[1]=s2[1]=s3[1]))
	{
		printf("yes");
	}
	else if((s1[0]=s1[1])&&(s2[0]=s2[1])&&(s3[0]=s3[1]))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
