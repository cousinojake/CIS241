#include <stdio.h>
#include <math.h>
#include <time.h>

void Problem2_31();
void Problem2_33(double milesDriven, double costPerGal, double avgMPG, double parkingFees, double tollFees);
void Problem3_40();
void Problem3_47(int month, int day, int year);
void Problem4_38();
void Problem4_40();
void Problem5_48();
void Problem5_49();


//Comment and copy source code and outputs
int main()
{
  Problem2_31();
  Problem2_33(1000, 2.88, 30, 10, 0); //avg commute in a month for me.
  //Problem3_40();
  Problem3_47(11, 10, 1994);
  Problem4_38();
  Problem4_40();
  Problem5_49();
  return 0;
}

//prints the numbers from 0 to 10 and the squared and cubed values.
void Problem2_31()
{
  printf("\n\n%s\n\n", "*** Problem2_31 ***" );

  printf("%s\t", "Number");
  printf("%s\t", "Square");
  printf("%s\n", "Cubed");

  for(int i = 0; i < 11; i++)
  {
    printf("%d\t", i);
    printf("%d\t", (int)pow(i, 2));
    printf("%d\n", (int)pow(i, 3));
  }
}

//Calculates the cost for driving x anmount of miles at a cost per gallon of gases
// also adds in parking fees as well as tolls you encounter.
void Problem2_33(double milesDriven, double costPerGal, double avgMPG, double parkingFees, double tollFees)
{
  printf("\n\n%s\n\n", "*** Problem2_33 ***" );

  double gallonsofGasUsed = milesDriven / avgMPG;
  double costOfGasUsed = gallonsofGasUsed * costPerGal;
  double totalCost = costOfGasUsed + parkingFees + tollFees;
  printf("Total Cost for Commute: %.2f\n", totalCost);
}

//Program will run forever and eventually start to print 0 because of
//the size of the nuber exceeds the size of the int data type.
void Problem3_40()
{
  printf("\n\n%s\n\n", "*** Problem3_40 ***" );

  int i = 2;
  while(1)
  {
    printf("%d\n", i);
    i *= 2;
  }
}

//Calculates your target heart rate for a workout given your birthday.
void Problem3_47(int month, int day, int year)
{
  printf("\n\n%s\n\n", "*** Problem3_47 ***" );

  time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  int currentMonth = tm.tm_mon + 1;
  int currentDay = tm.tm_mday;
  int currentYear = tm.tm_year + 1900;
  printf("Todays Date: %d - %d - %d\n", currentMonth, currentDay, currentYear);
  printf("Your Date of Birth entered: %d - %d - %d\n", month, day, year);

  int age = currentYear - year - 1;
  if(currentMonth >= month)
  {
    if(currentDay >= day) age++;
  }

  printf("Your age: %d\n", age);
  int targetHeartRate = 220 - age;
  printf("Your Targer Heart Rate: %d\n", targetHeartRate);
  if(currentMonth == month && currentDay == day)
  {
    printf("%s\n", "Happy Birthday!!");
  }
}

//prints the song the first day of christmas.
void Problem4_38()
{
  printf("\n\n%s\n\n", "*** Problem4_38 ***" );

  int i;
  for(i = 0; i<12; i++)
  {
    printf("%s", "On the ");
    switch(i)
    {
      case 0:
        printf("%s", "first ");
        break;
      case 1:
        printf("%s", "second ");
        break;
      case 2:
        printf("%s", "third ");
        break;
      case 3:
        printf("%s", "fourth ");
        break;
      case 4:
        printf("%s", "fifth ");
        break;
      case 5:
        printf("%s", "sixth ");
        break;
      case 6:
        printf("%s", "seventh ");
        break;
      case 7:
        printf("%s", "eighth ");
        break;
      case 8:
        printf("%s", "nineth ");
        break;
      case 9:
        printf("%s", "tenth ");
        break;
      case 10:
        printf("%s", "eleventh ");
        break;
      case 11:
        printf("%s\n", "twelth");
        break;
    }
    printf("%s\n", "day of Christmas my true love sent to me ");
    switch (i)
    {
      case 0:
        printf("%s\n\n", "a partridge in a pear tree");
        break;
      case 1:
      printf("%s\n", "Two turtle doves, and");
      printf("%s\n\n", "A partridge in a pear tree");
        break;
      case 2:
        printf("%s\n", "Three French hens");
        printf("%s\n", "Two turtle doves, and");
        printf("%s\n\n", "a partridge in a pear tree");
        break;
      case 3:
        printf("%s\n", "Four colly birds");
        printf("%s\n", "Three French hens");
        printf("%s\n", "Two turtle doves, and");
        printf("%s\n\n", "a partridge in a pear tree");
        break;
      case 4:
        printf("%s\n", "Five golden rings");
        printf("%s\n", "Four colly birds");
        printf("%s\n", "Three French hens");
        printf("%s\n", "Two turtle doves, and");
        printf("%s\n\n", "a partridge in a pear tree");
        break;
      case 5:
        printf("%s\n", "Six geese a-laying");
        printf("%s\n", "Five golden rings");
        printf("%s\n", "Four colly birds");
        printf("%s\n", "Three French hens");
        printf("%s\n", "Two turtle doves, and");
        printf("%s\n\n", "a partridge in a pear tree");
        break;
      case 6:
        printf("%s\n", "Seven swans a-swimming");
        printf("%s\n", "Six geese a-laying");
        printf("%s\n", "Five golden rings");
        printf("%s\n", "Four colly birds");
        printf("%s\n", "Three French hens");
        printf("%s\n", "Two turtle doves, and");
        printf("%s\n\n", "a partridge in a pear tree");
        break;
      case 7:
        printf("%s\n", "Eight maids a-milking");
        printf("%s\n", "Seven swans a-swimming");
        printf("%s\n", "Six geese a-laying");
        printf("%s\n", "Five golden rings");
        printf("%s\n", "Four colly birds");
        printf("%s\n", "Three French hens");
        printf("%s\n", "Two turtle doves, and");
        printf("%s\n\n", "a partridge in a pear tree");
        break;
      case 8:
        printf("%s\n", "Nine ladies dancing");
        printf("%s\n", "Eight maids a-milking");
        printf("%s\n", "Seven swans a-swimming");
        printf("%s\n", "Six geese a-laying");
        printf("%s\n", "Five golden rings");
        printf("%s\n", "Four colly birds");
        printf("%s\n", "Three French hens");
        printf("%s\n", "Two turtle doves, and");
        printf("%s\n\n", "a partridge in a pear tree");
        break;
      case 9:
        printf("%s\n", "Ten lords a-leaping");
        printf("%s\n", "Nine ladies dancing");
        printf("%s\n", "Eight maids a-milking");
        printf("%s\n", "Seven swans a-swimming");
        printf("%s\n", "Six geese a-laying");
        printf("%s\n", "Five golden rings");
        printf("%s\n", "Four colly birds");
        printf("%s\n", "Three French hens");
        printf("%s\n", "Two turtle doves, and");
        printf("%s\n\n", "a partridge in a pear tree");
        break;
      case 10:
        printf("%s\n", "Eleven pipers piping");
        printf("%s\n", "Ten lords a-leaping");
        printf("%s\n", "Nine ladies dancing");
        printf("%s\n", "Eight maids a-milking");
        printf("%s\n", "Seven swans a-swimming");
        printf("%s\n", "Six geese a-laying");
        printf("%s\n", "Five golden rings");
        printf("%s\n", "Four colly birds");
        printf("%s\n", "Three French hens");
        printf("%s\n", "Two turtle doves, and");
        printf("%s\n\n", "a partridge in a pear tree");
        break;
      case 11:
        printf("%s\n", "Twelve drummers drumming");
        printf("%s\n", "Eleven pipers piping");
        printf("%s\n", "Ten lords a-leaping");
        printf("%s\n", "Nine ladies dancing");
        printf("%s\n", "Eight maids a-milking");
        printf("%s\n", "Seven swans a-swimming");
        printf("%s\n", "Six geese a-laying");
        printf("%s\n", "Five golden rings");
        printf("%s\n", "Four colly birds");
        printf("%s\n", "Three French hens");
        printf("%s\n", "Two turtle doves, and");
        printf("%s\n\n", "a partridge in a pear tree");
        break;
    }
  }
}

//Calculates the fair tax cost for monthly expenses.
void Problem4_40()
{
    printf("\n\n%s\n\n", "*** Problem4_40 ***" );

    float housingCost;
    float foodCost;
    float clothingCost;
    float transportationCost;
    float healthCareCost;
    float educationCost;
    float vacationCost;


    printf("%s\n", "Fair Tax Calculator:");
    printf("%s\n", "Please enter cost per month for the following categories:");
    printf("%s", "Housing: ");
    scanf("%f", &housingCost);
    printf("%s", "Food: ");
    scanf("%f", &foodCost);
    printf("%s", "Clothing: ");
    scanf("%f", &clothingCost);
    printf("%s", "Transportation: ");
    scanf("%f", &transportationCost);
    printf("%s", "Health Care: ");
    scanf("%f", &healthCareCost);
    printf("%s", "Education: ");
    scanf("%f", &educationCost);
    printf("%s", "Vacation: ");
    scanf("%f", &vacationCost);

    float expenses = (housingCost + foodCost + clothingCost + transportationCost + healthCareCost + educationCost + vacationCost);
    float estFairTax = 0.23 * expenses;

    printf("Your estimated Fair tax for all your expenses would be: %0.2f\n", estFairTax);

}

void Problem5_48()
{
  /* Fiboncci sequence:
  * Using the implementation we have seen in class where we call the Fiboncci
  * function twice on the return where we add the two previous values
  * in the return statement. This is calling the function twice in the end.
  * Using the tail recursion method I found online, it accepts the index of the
  * value of the Fiboncci sequence number we want and returns it that value.
  * The tail recursion method is only called in the return statement and only
  * called once whereas the implementation derived in class calls the function
  * twice.
  */

}

//Global warming quiz with a web link if 3 or less correct answers.
void Problem5_49()
{
  printf("\n\n%s\n\n", "*** Problem5_49 ***" );

  int numberCorrect = 0;
  char answer;

  printf("%s\n", "Global Warming Quiz");

  printf("%s\n","1. Humans Burn _________ fuels which can add greenhouse gases." );
  printf("%s\n","A. Energy");
  printf("%s\n","B. Fossil");
  printf("%s\n","C. Carbonic");
  printf("%s\n","D. Liquid");
  scanf(" %c", &answer );
  if(answer == 'b' || answer == 'B') numberCorrect++;

  printf("%s\n","2. What is the greenhosue effect?" );
  printf("%s\n","A. Where heat is kept out of the Earth");
  printf("%s\n","B. Where heat is kept in the Earth");
  printf("%s\n","C. Where more light is let into the Earth");
  printf("%s\n","D. Where less light is let into the Earth");
  scanf(" %c", &answer );
  if(answer == 'b' || answer == 'B') numberCorrect++;

  printf("%s\n","3. What could one effect of global warming be?" );
  printf("%s\n","A. More islands forming");
  printf("%s\n","B. Sea level rise");
  printf("%s\n","C. More volcanic eruptions");
  printf("%s\n","D. More Landslides");
  scanf(" %c", &answer );
  if(answer == 'b' || answer == 'B') numberCorrect++;

  printf("%s\n","4. What do greenhouse gases do?" );
  printf("%s\n","A. They cause more heat to be kept out of the Earth.");
  printf("%s\n","B. They cause the sun's light to be kept out of the Earth");
  printf("%s\n","C. They absorb and hold in heat");
  printf("%s\n","D. They cause acid rain.");
  scanf(" %c", &answer );
  if(answer == 'c' || answer == 'C') numberCorrect++;

  printf("%s\n","5. Global Warming could cause " );
  printf("%s\n","A. Forest Fires");
  printf("%s\n","B. Glaciers to get smaller");
  printf("%s\n","C. Glaciers to get bigger");
  printf("%s\n","D. Volcanoes to errupt");
  scanf(" %c", &answer );
  if(answer == 'b' || answer == 'B') numberCorrect++;

  if(numberCorrect == 5) printf("%s\n", "(5/5) Excellent");
  if(numberCorrect == 4) printf("%s\n", "(4/5) VeryGood");
  if(numberCorrect < 4)
  {
    printf("%s\n", "Time to brush up on your knowledge of global warming");
    printf("%s\n", "Try looking at the following sites:");
    printf("%s\n", "https://www.proprofs.com/quiz-school/topic/global-warming");
  }
}
