#include <stdio.h>
#include <math.h>

#define M_PI 3.141592653589793

double to_radiant(int x) {
    return x * (M_PI / 180.0);
}

// Function for factorial
double factorial (int n)
{
    int fact = 1;

   for (int flag = 1; flag <= n; flag++)
   {
        fact *= flag;
   }

   return fact;
}

// Function: Taylor's sin
// double taylor_sin(double x, int terms) {
//     double result = 0.0;
//     for (int n = 0; n < terms; n++) {
//         double term = pow(-1, n) * pow(x, 2*n + 1) / factorial(2*n + 1);
//         result += term;
//     }
//     return result;
// }
double taylor_sin(double x, int n_terms) {
    double result = 0.0;
    int sign = 1; // Used to alternate between adding and subtracting terms

    for (int i = 0; i < n_terms; i++) {
        int exponent = 2 * i + 1;
        result += sign * pow(x, exponent) / factorial(exponent);
        sign *= -1; // Flip the sign for the next term
    }
    return result;
}

int main() {
    double x;
    double hasil;

    printf("Masukkan x: ");
    scanf("%lf", &x);

    printf("%lf", taylor_sin(to_radiant(x), 5));
}
