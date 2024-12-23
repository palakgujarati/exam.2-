#include <stdio.h>

// Function to calculate sum
int sum() {
    int total = 0;
    for (int i = 1; i <= 10; i++) {
        total += i;
    }
    return total;
}

int main() {
    printf("Sum of numbers from 1 to 10 is: %d\n", sum());
   
}
