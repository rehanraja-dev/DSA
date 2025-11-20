#include <stdio.h>
#include <math.h>  

int main() {
    int n, i;
    float data[100], mean, sum = 0.0, sd = 0.0;

    printf("\n Name:- Rehan Raja \n");
    printf(" Enrolment:- 0187CS241174 \n\n\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &data[i]);
        sum += data[i];
    }

    mean = sum / n;

    for (i = 0; i < n; i++) {
        sd += pow(data[i] - mean, 2);
    }

    sd = sqrt(sd / n);

    printf("\nMean = %.2f\n", mean);
    printf("Standard Deviation = %.2f\n", sd);

    return 0;
}
