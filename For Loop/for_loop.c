// Main Library
#include <stdio.h>

// Main Function
int main() {
    // For loop that goes from 0 -10
    for (int i = 0; i <= 10; i++) {
        // Conditional statement to check if we found 7
        if (i == 7) {
            printf("We found 7!\n");
        } else {
            printf("%d\n", i);
        }
    }

    // return
    return 0;
}