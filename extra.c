#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a String: ");
    gets(str);
    int i,j,len;
    char temp;
    len=strlen(str);
    for ( i = 0; i <len; i++)
    {
            if (str[i]==' ' && (str[i+1]>=97 && str[i+1]<=122))
            {
                str[i+1]=str[i+1]-32;
            }
            else if(str[0]>=97&&str[0]<=122)
            str[0]=str[0]-32;
    }
    printf("Alpabetical order of string: %s\n",str);
}