#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

void Problem6_28();
bool Problem6_31(char *str, int startIndex, int endIndex);
void Problem7_31();
double Add(double a, double b);
double Subtract(double a, double b);
double Multiply(double a, double b);
double Divide(double a, double b);
void Problem7_32();
void Problem8_34();
void Problem8_38();
void Problem9_10(int tempDegF);
void Problem9_15();

int main()
{

  Problem6_28();
  printf("\n\n%s\n\n", "*** Problem6_31 ***" );
  char *testString = "radar";
  if(Problem6_31(testString, 1, strlen(testString)))
  {
    printf("%s%s\n", testString, " is a palindromes");
  }
  else
  {
    printf("%s%s\n", testString, " is not a palindromes");
  }

  Problem7_31();
  Problem9_10(72);

  return 0;
}

void Problem6_28()
{
  printf("\n\n%s\n\n", "*** Problem6_28 ***" );

  srand(time(NULL));
  int array[20];
  int arrayCheck[21]; //Will hold flags for filled(1) or not filled(0) //ignore index 0
  int arrayIndex = 0;

  for(int i = 0; i< 21; i++)
  {
    arrayCheck[i] = 0;
  }

  for(int i = 0; i < 20; i++)
  {
    int randNum = (rand() % 20) + 1;
    if(!arrayCheck[randNum])
    {
      array[arrayIndex] = randNum;
      arrayIndex++;
      arrayCheck[randNum] = 1;
    }
  }
  int smallestArray[arrayIndex];
  for(int i = 0; i<arrayIndex; i++)
  {
    smallestArray[i] = array[i];
    printf("Value @ %d: %d\n", i, smallestArray[i]);
  }
}

bool Problem6_31(char str[], int startIndex, int endIndex)
{
  if(startIndex == endIndex) return true;
  if(str[startIndex] != str[endIndex]) return false;
  if(startIndex < endIndex+1)
  {
    return Problem6_31(str, startIndex + 1, endIndex - 1);
  }
  return true;
}

void Problem7_31()
{
  printf("\n\n%s\n\n", "*** Problem7_31 ***" );

  double (*addFuncPtr)(double, double) = &Add;
  double (*subtractFuncPtr)(double, double) = &Subtract;
  double (*multiplyFuncPtr)(double, double) = &Multiply;
  double (*divideFuncPtr)(double, double) = &Divide;

  printf("\t\t%s\n", "Welcome to the Calculator");
  printf("\t%s\n", "Select an option below.");
  printf("\n\t%s\n", "1. Add");
  printf("\t%s\n", "2. Subtract");
  printf("\t%s\n", "3. Multiply");
  printf("\t%s\n", "4. Divide");

  int choice, number1, number2;
  scanf("%d", &choice);
  printf("\t%s\n", "Please Enter the two numbers you would like to process");
  printf("\t%s", "Number 1: ");
  scanf("%d", &number1);
  printf("\t%s", "Number 2: ");
  scanf("%d", &number2);

  double addResult, subResult, mulResult, divResult;
  switch (choice) {
    case 1:
      addResult = (*addFuncPtr)(number1, number2);
      printf("\t%s%.2f\n", "Add result: ", addResult);
      break;
    case 2:
      subResult = (*subtractFuncPtr)(number1, number2);
      printf("\t%s%.2f\n", "Subtract result: ", subResult);
      break;
    case 3:
      mulResult = (*multiplyFuncPtr)(number1, number2);
      printf("\t%s%.2f\n", "Multiply result: ", mulResult);
      break;
    case 4:
      divResult = (*divideFuncPtr)(number1, number2);
      printf("\t%s%.2f\n", "Divide result: ", divResult);
      break;
    default:
      break;
  }
}

double Add(double a, double b)
{
  return a + b;
}

double Subtract(double a, double b)
{
  return a - b;
}

double Multiply(double a, double b)
{
  return a * b;
}

double Divide(double a, double b)
{
  return a / b;
}

void Problem7_32()
{
  printf("\n\n%s\n\n", "*** Problem7_32 ***" );

}

void Problem8_34()
{
  printf("\n\n%s\n\n", "*** Problem8_34 ***" );

}

void Problem8_38()
{
  printf("\n\n%s\n\n", "*** Problem8_38 ***" );

}

void Problem9_10(int tempDegF)
{
  printf("\n\n%s\n\n", "*** Problem9_10 ***" );

  double degC = (5.0 / 9.0) * (tempDegF - 32);
  printf("%s%d\t%s%9.3f\n", "Input temp in Deg F: ", tempDegF, " in DegC: ", degC );
}

void Problem9_15()
{
  printf("\n\n%s\n\n", "*** Problem9_15 ***" );

}
