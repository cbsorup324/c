//2.(HW) WAP to extract the first character of each word of a given string (Achromatic string).
#include<stdio.h>
#include<conio.h>
int main()
{
char ch[100];
int i;
printf("Enter any string:");
gets(ch);
i=0;
printf("\n%c",ch[0]);
while(ch[i]!='\0')
{
if(ch[i]==' ')
{
i++;
printf("%c",ch[i]);
}
i++;
}
getch();
}
