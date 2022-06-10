#include <stdio.h>
#include <string.h>

int main() {
    // Variables
    char from[10];
    char to[10];
    int amount;
    int converted;

    // Welcome
    printf("Welcome to the best Unit Converter! (only length)\n");
    printf("WE only use SI units, since we aren't fucking crazy.\n");

    // Space
    printf("\n");
    
    // Converter from
    printf("Please select a the unit you'd like to convert from: \n");
    printf("km (kilometres), m (metre), cm, (centimetre), mm (milimetre)\n");
    printf(": ");
    scanf("%s", from);

    // Convert to
    printf("Please select a the unit you'd like to convert to: \n");
    printf("km (kilometres), m (metre), cm, (centimetre), mm (milimetre)\n");
    printf(": ");
    scanf("%s", to);

    // Logic
    printf("%s\n", from);
    if (strcmp(from, "km") == 0) 
    {
        if (strcmp(to, "m") == 0) 
        {
            printf("KM TO M");
        } 
        else if (strcmp(to, "cm") == 0) 
        {
            printf("KM to cm");
        }
        else if (strcmp(to, "mm") == 0) {
            printf("KM TO MM");
        }
    } 
    if (strcmp(from, "m") == 0) 
    {
        if (strcmp(to, "km") == 0) 
        {
            printf("M TO KM");
        } 
        else if (strcmp(to, "cm") == 0) 
        {
            printf("M TO CM");
        }
        else if (strcmp(to, "mm") == 0) {
            printf("M TO MM");
        }
    } 
    if (strcmp(from, "cm") == 0) 
    {
        if (strcmp(to, "km") == 0) 
        {
            printf("CM TO KM");
        } 
        else if (strcmp(to, "m") == 0) 
        {
            printf("CM TO M");
        }
        else if (strcmp(to, "mm") == 0) {
            printf("CM TO MM");
        }
    } 
    if (strcmp(from, "mm") == 0) 
    {
        if (strcmp(to, "km") == 0) 
        {
            printf("MM TO KM");
        } 
        else if (strcmp(to, "m") == 0) 
        {
            printf("MM TO M");
        }
        else if (strcmp(to, "cm") == 0) {
            printf("MM TO CM");
        }
    } 

    return 0;
}