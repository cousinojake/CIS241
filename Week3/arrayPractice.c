#include <stdio.h>

void AddArrayElements();
void PrintArrayAddresses();
// int BinarySearch(int array[], int key);

int main()
{
  AddArrayElements();
  PrintArrayAddresses();
  // int vect[12] = {1, 2, 3, 4, 5, 6 , 7, 8, 9, 10, 11, 12};
  // int resultIndex = BinarySearch(vect, 6);
  // printf("%s: %d\n", "Result Index", resultIndex);
  return 0;
}

void AddArrayElements()
{
  int vect[12] = {1, 2, 3, 4, 5, 6 , 7, 8, 9, 10, 11, 12};
  // int vect[12] = {1, 1, 1, 1, 1, 1 , 1, 1, 1, 1, 1, 1};

  int total = 0;
  for(int i = 0; i < 12; i++)
  {
    total += vect[i];
  }
  printf("%s %d\n","Sum of the array: ", total);
}

void PrintArrayAddresses()
{
  int vect[12] = {1, 2, 3, 4, 5, 6 , 7, 8, 9, 10, 11, 12};

  printf("vect:     %p\n&vect[0]: %p\n&vect:    %p\n", vect, &vect[1], &vect); //%p is a pointer
}

// int BinarySearch(int array[], int key)
// {
//   bool keyFound = false;
//   int searchArray[] = array;
//   int resultIndex;
//   while(!keyFound)
//   {
//     int middle = array.size() / 2;
//     if(array[middle] == key)
//     {
//       resultIndex = middle;
//       keyFound = true;
//     }
//     if(array[middle] > key)
//     {
//       for(int i = middle; i < searchArray.length(); i++)
//       {
//         searchArray[i] = array[i];
//       }
//     }
//     else if(array[middle] < key)
//     {
//       for(int i = middle; i > 0; i--)
//       {
//         searchArray[i] = array[i];
//       }
//     }
//   }
//   return resultIndex;
// }
