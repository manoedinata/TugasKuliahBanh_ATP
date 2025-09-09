// Menghitung nilai Sin dari radian 
// menggunakan Teori Taylor (Taylor's Theorem)
// Hendra Manudinata - 5027251051

#include <stdio.h>
#include <math.h>

// M_PI sebenarnya sudah ada dari library <math.h>,
// namun didefinisian lagi untuk menghindari warning dari VSCode.
#define M_PI 3.141592653589793

// Fungsi: Faktorial
double faktorial(int n) {
    double fact = 1.0;
    int flag;

    for (flag = 1; flag <= n; flag++) {
        fact *= flag;
    }

    return fact;
}

// Fungsi: Hitung sin
double taylor_sin(double x, int n_terms) {
    double result = 0.0;
    int sign = 1;

    for (int i = 0; i < n_terms; i++) {
        int exponent = 2 * i + 1;

        result += sign * pow(x, exponent) / faktorial(exponent);
        sign *= -1; // Ganti tanda untuk perhitungan selanjutnya
    }
    return result;
}

// Fungsi: Ubah derajat ke radian
// double derajat_ke_radian(double x) {
//     return x * (M_PI / 180.0);
// }

int main() {
    double x, result;
    printf("Masukkan sudut dalam derajat (x): ");
    scanf("%lf", &x);

    result = taylor_sin(x * (M_PI / 180.0), 5); // taylor_sin(derajat, jumlah ulangan)

    printf("%lf\n", result);

    return 0;
}
