#include <stdio.h>
#include <string.h>
#include<conio.h>
#include <ctype.h>
int main()
{
char s[10], e[10];
int k,i,l;
int result;
printf("\n Enter the s text:");
scanf("%s", s);
printf("\n Enter the key value:");
scanf("%d", &k);
printf("\n \n \t PLAIN TEXT: %s",s);
printf("\n \n \t ENCRYPTED TEXT: ");
for(i = 0, l = strlen(s); i < l; i++)
{
e[i]=s[i] + k;
if (isupper(s[i]) && (e[i] > 'Z'))
e[i] = e[i] - 26;
if (islower(s[i]) && (e[i] > 'z'))
e[i] = e[i] - 26;
printf("%c", e[i]);
}
printf("\n \n \t AFTER DECRYPTION : ");
for(i=0;i<l;i++)
{
s[i]=e[i]-k;
if(isupper(e[i])&&(s[i]<'A'))
s[i]=s[i]+26;
if(islower(e[i])&&(s[i]<'a'))
s[i]=s[i]+26;
printf("%c",s[i]);
}
return 0;
}
