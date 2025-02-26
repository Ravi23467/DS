#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX_POINTS 1000000

double monteCarloPiEstimation(int numPoints) {
    int insideCircle = 0;

    for (int i = 0; i < numPoints; ++i) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;

        if (x * x + y * y <= 1.0) {
            insideCircle++;
        }
    }

    return 4.0 * insideCircle / numPoints;
}

int main() {
    srand((unsigned int)time(NULL));

    int numPoints = MAX_POINTS;
    double estimatedPi = monteCarloPiEstimation(numPoints);

    printf("Estimated value of pi using %d random points: %lf\n", numPoints, estimatedPi);

    return 0;
}

