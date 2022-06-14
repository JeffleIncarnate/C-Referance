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
    
    char *token = strtok(input, " ");
    while (token != NULL) {
        if (strcmp(token, "1") == 0) {
            party1++;
        } else if (strcmp(token, "2") == 0) {
            party2++;
        }
        token = strtok(NULL, " ");
    }
   
    printf("Party 1: %d\n", party1);
    printf("Party 2: %d\n", party2);

    return 0;
}