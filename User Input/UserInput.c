#include <stdio.h>
#include <stdlib.h>

int main() {
  char name[20];

  printf("Enter your name: ");

  // This is better, but can only store one number
  scanf("%s", name);
  // General, can store more than one word
  // fgets(name, 20, stdin);

  printf("Your name is %s!", name);

  return 0;
}
