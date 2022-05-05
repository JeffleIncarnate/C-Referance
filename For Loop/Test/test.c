#include <stdio.h>

int main() {
    for (int i = 2; i < 7; i++) {
        for (int j = 1; j < i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    printf("\n");

    for (int i = 1; i <= 5; i++) {
        for (int j = 6; j > i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}