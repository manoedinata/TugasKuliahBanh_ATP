// Hendra Manudinata
// 5027251051

#include <stdio.h>
#include <math.h>

void SegitigaBintang(int n) {
    n = n + 2;
    for (int i = 1; i <= n; i++) {
        // Print spasi (margin)
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        // Print bintang
        for (int j = 0; j < (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}


int main() {
    for (int n = 1; n <= 3; n++) {
        printf("Segitiga bintang dengan n = %d\n", n);
        SegitigaBintang(n);
        printf("\n");
    }

    return 0;
}
