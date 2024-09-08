#include <stdio.h>
int fact(int n) //function to calculate factorial of a number
{
  int a;
  for (a = 1; n > 1; n--)
    a *= n;
  return a;
}
int combination(int n, int r)
{
  return fact(n) / (fact(n - r) * fact(r)); }
int main()
{
  int rows;
  int i, j;
  printf("Enter Number of Rows: ");
  scanf("%d", &rows);
  for (i = 0; i <= rows; i++)
  {
    for (j = 0; j <= rows - i; j++)
      printf("  ");
    for (j = 0; j <= i; j++)
      printf(" %3d", combination(i, j));
    printf("\n");
  }
  return 0;
}
// Full pyramid of numbers
#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}
//Inverted pyramid of asterisks
#include <stdio.h>
int main() {
   int rows, i, j, space;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
   return 0;
}

