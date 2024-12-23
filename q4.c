#include <stdio.h>
int main() {
    for (int i = 8; i >= 1; i--) {
        for (int j = 8; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
