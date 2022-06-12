#include <stdio.h>
#include <math.h>
#include <string.h>

// Get Input
// 10, seperated by a comma 1 or 2
// Whichever one get's more votes, is the winner

int main() {
    char input[50];
    char *point;

    printf("Please enter 10 values entered by a ,\n");
    printf("E.g: 1, 2, 3, 4, 5, 6, 7\n");
    printf(": ");
    
    fgets(input, 50, stdin);

    // Splitting
    int size = sizeof(input) / sizeof(input[0]);

    printf("%d", size);

    // for (int i = 0; i < 10; i++) {
        
    // }

    return 0;
}