/*2. WAP to replace all occurrences of a character in a string with the previous
3rd character if any of the character
*/
#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter the string:");
    char c[100],a;
    int p=0;
    gets(c);
    printf("Enter the character to search for:");
    scanf("%c",&a);
    printf("Initially the string is %s\n",c);
    for(int i=3;c[i]!='\0';i++)
    {
        if(c[i]==a)
        {
            p=i;
            break;
        }
    }
    if(p!=0)
    {
        for(int i=p;c[i]!='\0';i++)
        {
            if(c[i]==a)
            c[i]=c[i-3];
        }
    }
    printf("The final string after replacing each occurence of '%c' with their previous 3rd character is %s",a,c);

    return 0;
}
