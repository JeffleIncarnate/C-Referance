// Main Library
#include <stdio.h>
#include <string.h> /* Need this library for structs */

struct Student {
    char firstName[10];
    char lastName[10];
    int age;
};


int main() {
    // Declare Kid 1
    struct Student kid1;

    // Fill it with info
    strcpy( kid1.firstName, "Dhruv" );
    strcpy( kid1.lastName, "Rayat" );
    kid1.age = 15;

    // Print out info that we filled
    printf("Kid 1 Firstname is: %s\n", kid1.firstName);
    printf("Kid 1  Lastname is: %s\n", kid1.lastName);
    printf("Kid 1 Age is: %d", kid1.age);

    return 0;
}
/*
GO TO THIS WEBSITE FOR MORE INFO ON STRUCTS
https://www.tutorialspoint.com/cprogramming/c_structures.htm 
 */