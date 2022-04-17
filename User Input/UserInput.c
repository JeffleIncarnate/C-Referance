#include <stdio.h>
#include <stdlib.h>

int main() {
  int age;
  double gpa;
  char grade;
  char name[20];

  age = printf("Enter your name: ");

  // This is better, but can only store one number
  scanf("%s", name);
  // General, can store more than one word
  // fgets(name, 20, stdin);

  printf("Your name is %s!", name);

  return 0;
}
