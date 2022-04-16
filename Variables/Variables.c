// Libraries
#include <stdio.h>
#include <stdlib.h>

// You need this to get a bool variable with C
#include <stdbool.h>

// Main Function
int main(void) {
  // Int
  int characterAge = 15;

  // String = Array of chars "I KNOW STUPID"
  char characterName[] = "Dhruv Rayat";

  // Bool: True or False
  bool isMale = true;

  // Float: Floating point decimals
  float gpa = 14.243;

  // Print Character name "%s" stands for string as a placeholder for the string var
  printf("Character Name: %s \n", characterName);

  // Print Character Age "%d" stand for int as a placehodler for the int var
  printf("Chacter Age %d \n", characterAge);

  // Print the Character GPA "%f" stands for int as a placeholder for the float var
  printf("Character GPA %f ", gpa);

  return 0;
}
