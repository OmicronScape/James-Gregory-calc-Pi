#include <stdio.h>
int main() {
    int N;
    double P = 0.0;

    // Input and validation of N
    do {
        printf("Δώσε τον αριθμό Ν(Από 1000 έως και 100.000):  ");
        scanf("%d", &N);

        if (N < 1000 || N > 100000) {
            printf("Λανθασμένη τιμή. Παρακαλώ δώστε έναν αριθμό μεταξύ 1000 και 100000.\n");
        }
    } while (N < 1000 || N > 100000);

    // Calculation of π using the formula
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            P = P + 1.0 / (2 * i + 1);
        } else {
            P = P - 1.0 / (2 * i + 1);
        }
    }

    // Final calculation of π
    P = P * 4;

    // Display the result with eight decimal places of precision
    printf("Η τιμή του π είναι: %.8lf\n", P);

    return 0;
}
