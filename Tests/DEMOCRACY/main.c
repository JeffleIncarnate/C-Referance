#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char input[100];
    int party1 = 0;
    int party2 = 0;

    printf("Enter the Numbers: ");
    scanf("%[^\n]", input);

    int i = 0;
    while (input[i] != '\0') {
        if (input[i] == ',') {
            input[i] = ' ';
        }
        i++;
    }

    int j = -1;
    while (input[j] != '\0') {
        j++;
        if (input[j] == '1') {
            printf("Y E S\n");
        } else if (input[j] == '2') {
            printf("Nah bro\n");
        } else {}
    }
   
    printf("Party 1: %d\n", party1);
    printf("Party 2: %d\n", party2);

    return 0;
}