// Libraries
#include <stdio.h>
#include <stdlib.h>

// This is a function that will return the cubed of the num that the user gives
double cubeNum(int a) {
  double sum = a * a * a;
  return sum;
}

// This is called Prototyping, it is a call of the function we made BELOW the main method
double squareNum(int b);

// Main Function
int main() {
  printf("%f", cubeNum(5.0));
  return 0;
}

// NEVER MAKE A FUNCTION BELOW THAT INT MAIN FUNCTION
double squareNum(int b) {
  float total = b * b
  return total
}
