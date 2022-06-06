#include <stdio.h>

int main() {
    int nums[10] = { 15, 23, 12, 1, 123, 32, 12312, 123, 23254, 90 };
    int total = 0;

    size_t size = sizeof(nums) / sizeof(nums[0]);

    printf("Size of ints: %d", sizeof(nums[1]));

    for (int i = 0; i < size; i++) {
        total += nums[i];
    }

    printf("The total is: %d", total);

    return 0;
}