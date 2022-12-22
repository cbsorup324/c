/*1. WAP to reads a sentence and prints frequency of each of the vowels and
total count of Consonant.
*/
#include <stdio.h>
int main()
{
  char line[150];
  int vowels_328, consonant_328;
  vowels_328 = consonant_328= 0;
  printf("Enter a line of string: ");
  fgets(line, sizeof(line), stdin);
  for (int i_328 = 0; line[i_328] != '\0'; ++i_328)
  {
    line[i_328] =  tolower(line[i_328]);
    if (line[i_328] == 'a' || line[i_328] == 'e' || line[i_328] == 'i' ||
        line[i_328] == 'o' || line[i_328] == 'u')
   {
      ++vowels_328;
    }
    else if ((line[i_328] >= 'a' && line[i_328] <= 'z'))
   {
      ++consonant_328;
    }
  }

  printf("Vowels: %d", vowels_328);
  printf("\nConsonants: %d", consonant_328);
  return 0;
}