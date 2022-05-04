// Main Library
#include <stdio.h>

// Main Function
int main() {
  // Calling the "Say Hi" function 
  sayHi("Dhruv", 15); // Giving it the Param of a string (char index) and a num
  return 0; // return
}

// This is the "Say Hi" void
void sayHi(char name[], int age) {
  printf("Hello %s\n", name); // print f
  printf("You are %d years old!", age); // Another printf
  // since it's void, no need to return
}
