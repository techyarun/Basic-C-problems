//printing star pattern --> (model 17)
//Pascal triangle
<--------------------
	//OUTPUT Value
	//if input=5
             1
           1   1
         1   2   1
       1   3   3   1
     1   4   6   4   1
-------------------->

#include <stdio.h>
#include<conio.h>

int main() {
	//variable declaration
   int rows, coef = 1, space, i, j;
   
   //user input
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   
   //logic
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }
      printf("\n");
   }
   return 0;
}
