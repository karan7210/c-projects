#include <stdio.h>

int main()
{

   int a[5];
   int b;
   int sum = 0;

   printf("Enter the numbers\n");

   scanf("%d", &b);

   for (int i = 0; i < b; ++i)
   {

      scanf("%d", &a[i]);
   }

   printf("After the given the number\n");

   for (int i = 0; i < b; ++i)
   {

      sum = sum + a[i];
   }

   printf("sum is %d", sum);

   return 0;
}