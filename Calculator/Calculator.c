// Libraries
#include <stdio.h>

// Main Funtction
int main() {
  // Declared Nums
  int num1;
  int num2;
  int sum;

  // Prompt user to enter first num
  printf("Please enter first num: ");
  // Scan the terminal and store it as num1 var
  scanf("%d", &num1);

  // Prompt user to enter second num
  printf("Please enter second num: ");
  // Scan the terminal and store it as num2 var
  scanf("%d", &num2);

  // Storing num1 + num2 as the var "sum"
  sum = num1 + num2;

  // Least it will print the variable sum which is num1 + num2
  printf("Answer: %d", sum);

  return 0;
}
