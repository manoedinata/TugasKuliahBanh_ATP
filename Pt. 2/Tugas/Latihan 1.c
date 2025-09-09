#include <stdio.h>

int main() {
    int i = 0, sum = 0, N;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    printf("\n");

    while(i <= N-1) {
        sum += i;
        i++;
    }

    printf("Hasil sum: %d\n", sum);

    return 0;
}
