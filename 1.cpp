#include <stdio.h>

void ordering(int number[], int count)
{
   int temp, i, j, k;
   for (j = 0; j < count; ++j)
   {
      for (k = j + 1; k < count; ++k)
      {
         if (number[j] < number[k])
         {
            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
         }
      }
   }
   printf("Numbers in ascending order:\n");
   for (i = 0; i < count; ++i)
      printf("%d\n", number[i]);
}
int main()
{
   int i, count, number[20];
 
   printf("How many numbers you are gonna enter:");
   scanf("%d", &count);
   printf("\nEnter the numbers one by one:");
   
   for (i = 0; i < count; ++i){
      scanf("%d", &number[i]);
   }
   ordering(number, count);
}

