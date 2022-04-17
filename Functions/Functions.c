#include <stdio.h>

int main() {
  sayHi("Dhruv", 15);
  return 0;
}

void sayHi(char name[], int age) {
  printf("Hello %s\n", name);
  printf("You are %d years old!", age);
}
