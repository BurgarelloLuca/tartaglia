#include <stdio.h>
int main() {
    int a, b;
    printf("\n");
    for (a = 1; a <= 12; a++) {
        for (b = 1; b <= 12; b++) {
            printf("%4d", a * b);
            if (b < 12) printf(" |");
        }
        printf("\n");

        printf("   -");
        for (b = 1; b <= 12; b++) {
            printf("------");
        }
        printf("\n");
    }
  return 0;
}