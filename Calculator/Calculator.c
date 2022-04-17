// Libraries
#include <stdio.h>

// Main Funtction
int main() {
  // Declared Nums
  double num1;
  double num2;
  double sum;

  // Prompt user to enter first num
  printf("Please enter first num: ");
  // Scan the terminal and store it as num1 var
  scanf("%lf", &num1);

  // Prompt user to enter second num
  printf("Please enter second num: ");
  // Scan the terminal and store it as num2 var
  scanf("%lf", &num2);

  // Storing num1 + num2 as the var "sum"
  sum = num1 + num2;

  // Least it will print the variable sum which is num1 + num2
  printf("Answer: %f", sum);

  return 0;
}
