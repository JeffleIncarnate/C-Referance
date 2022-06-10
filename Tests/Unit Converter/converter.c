#include <stdio.h>
#include <string.h>

int main() {
    // Variables
    char from[10];
    char to[10];
    double amount;
    double converted;

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

    // Space
    printf("\n");

    // Convert to
    printf("Please select a the unit you'd like to convert to: \n");
    printf("km (kilometres), m (metre), cm, (centimetre), mm (milimetre)\n");
    printf(": ");
    scanf("%s", to);

    // Space
    printf("\n");

    // Amount
    printf("Please enter amount you'd like to convert: ");
    scanf("%lf", &amount);

    // Logic
    // KM 
    if (strcmp(from, "km") == 0) 
    {
        if (strcmp(to, "m") == 0) 
        {
            converted = amount * 1000;
            printf("%lf", converted);
        } 
        else if (strcmp(to, "cm") == 0) 
        {
            converted = amount * 100000;
            printf("%lf", converted);
        }
        else if (strcmp(to, "mm") == 0) {
            converted = amount * 1000000;
            printf("%lf", converted);
        }
    } 
    
    // M
    if (strcmp(from, "m") == 0) 
    {
        if (strcmp(to, "km") == 0) 
        {
            converted = amount / 1000;
            printf("%lf", converted);
        } 
        else if (strcmp(to, "cm") == 0) 
        {
            converted = amount * 100;
            printf("%lf", converted);
        }
        else if (strcmp(to, "mm") == 0) {
            converted = amount * 1000;
            printf("%lf", converted);
        }
    } 
    
    // CM
    if (strcmp(from, "cm") == 0) 
    {
        if (strcmp(to, "km") == 0) 
        {
            converted = amount / 100000;
            printf("%lf", converted);
        } 
        else if (strcmp(to, "m") == 0) 
        {
            converted = amount / 100;
            printf("%lf", converted);
        }
        else if (strcmp(to, "mm") == 0) {
            converted = amount * 10;
            printf("%lf", converted);
        }
    } 
    
    // MM
    if (strcmp(from, "mm") == 0) 
    {
        if (strcmp(to, "km") == 0) 
        {
            converted = amount / 1000000;
            printf("%lf", converted);
        } 
        else if (strcmp(to, "m") == 0) 
        {
            converted = amount / 1000;
            printf("%lf", converted);
        }
        else if (strcmp(to, "cm") == 0) {
            converted = amount / 10;
            printf("%lf", converted);
        }
    } 

    return 0;
}