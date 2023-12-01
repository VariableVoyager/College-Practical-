// C Program To Calculate Coefficient of Variation
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])

{
    int i, n;
    float x[20]; // here I declared maximum number of elements to 20
    float sum = 0.0, mean, SD;

    // Asking for input
    printf("Enter total number of elements (upto 20): ");
    scanf("%d", &n);

    if (n > 20)
    {
        printf("WARNING\n"
               "Numeber of observations must not exceed 20\n"
               "TRY AGAIN!");
        return 1;
    }

    printf("Enter the value of elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    // Calculating Mean
    for (i = 0; i < n; i++)
    {
        sum += x[i];
        mean = sum / n;
    }
    // Calculating Standard Deviation
    sum = 0.0;
    for (i = 0; i < n; i++)
    {
        sum += (x[i] - mean) * (x[i] - mean);
    }
    SD = sqrt(sum / n);
    // printf("Mean: %.3f \n", mean);
    // printf("Standard Deviation: %.3f\n", SD);
    printf("Coefficient of Variation: %.3f", SD / mean);
    return 0;
}