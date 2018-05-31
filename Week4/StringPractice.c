#include <ctype.h> //islower() isupper() tolower() toupper() isprint() etc...
#include <stdlib.h> //strtod() string to double etc...
#include <stdio.h>
#include <string.h>

void PrintReverse(char *string);
void SplitStringToLine(char *string);

int main()
{

  // const char *testString = "Text 51.2 is the string"; //string
  // const char *testString = "-12345678abc";
  //
  // // double value;
  // long value;
  // char * remainingString;
  //
  // // value = strtod(testString, &remainingString); // only gets decimal if at begining of the string.
  // value = strtol(testString, &remainingString, 0); // only gets decimal if at begining of the string.
  //
  // printf("TestString: %s\n", testString);
  // printf("Value of the decimal: %ld\n", value );
  // printf("Remaining string: %s\n", remainingString);
  //
  // PrintReverse("abcdefghijklmnopqrst");
  // PrintReverse("Hello World");
  // PrintReverse("Jake Cousino");
  // PrintReverse("abcdefghijklmnopqrst");

  char *string = "today is nice and sunny 80f";
  SplitStringToLine(string);

  return 0;
}

void PrintReverse(char *string)
{
  int length = 0;
  for(int i = 0; i < 20; i++)
  {
    if(string[i] == '\0')
    {
      break;
    }
    length++;
  }

  char revString[length];
  for(int i = 0; i < length; i++)
  {
    // revString[i] = string[length - i];
    printf("%c", string[length - i - 1]);
  }
  printf("%s\n", revString);
}

void SplitStringToLine(char *string)
{
  char* token;
  token = strtok(string, " ");

  while(token != NULL)
  {
    printf("%s\n", token);
    token = strtok(NULL, " ");
  }
}
