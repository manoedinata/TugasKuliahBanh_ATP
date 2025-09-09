// Hendra Manudinata
// 5027251051

#include <stdio.h>

void KotakBintang(int n) {
    int limit = n + (n + 1);
    
    for (int i = 0; i < limit; i++) {

        if(i == (limit-1) || i == 0) {
            // Heading and trailing row
            for (int j = 0; j < limit; j++) {
                printf("*");
            }
            printf("\n");
        } else {
            // Middle rows
            for (int j = 0; j < limit; j++) {
                if(j == 0 || j == (limit-1)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}

int main() {
    for (int n = 1; n <= 3; n++) {
        printf("Kotak bintang dengan n = %d\n", n);
        KotakBintang(n);
    }
    return 0;
}
