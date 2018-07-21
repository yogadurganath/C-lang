#include <stdio.h>
#include <string.h>
int vowelcheck(char);
int main()
{
char s[100], t[100],a;
int i,n, j = 0;
scanf("%d",&n);
scanf("%s",s);
a=strlen(s);
if(n==a)
{
for(i = 0; s[i] != '\0'; i++) {
if(vowelcheck(s[i]) == 0){
t[j] = s[i];
j++;
}
}
t[j] = '\0';
strcpy(s, t);
strrev(s);
printf("%s", s);
}
return 0;
}
int vowelcheck(char c)
{
  switch(c) {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      return 1;
    default:
      return 0;
  }
}
