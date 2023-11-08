#include <stdio.h>

// 1. Function to find the value closest to zero.
double findCloseToZero(double *myArray, int numItems) {
    if (numItems <= 0) return 0; // or handle error

    double closest = *myArray;
    double *ptr = myArray + 1; // Start from the second element

    for (int i = 1; i < numItems; ++i, ++ptr) {
        if ((*ptr >= 0 && *ptr < closest) || (*ptr < 0 && -*ptr < -closest) || closest == 0) {
            closest = *ptr;
        }
    }

    return closest;
}

// 3. Function to find the value farthest from zero.
double findFarFromZero(double *myArray, int numItems) {
    if (numItems <= 0) return 0; // or handle error

    double farthest = *myArray;
    double *ptr = myArray + 1; // Start from the second element

    for (int i = 1; i < numItems; ++i, ++ptr) {
        if ((*ptr > 0 && *ptr > farthest) || (*ptr < 0 && *ptr < farthest)) {
            farthest = *ptr;
        }
    }

    return farthest;
}

// 4. Function to count items divisible by a divisor.
int countDivisible(int *myArray, int numItems, int divisor) {
    if (divisor == 0) return 0; // or handle error for divide by zero

    int count = 0;

    for (int i = 0; i < numItems; ++i) {
        if (myArray[i] % divisor == 0) {
            count++;
        }
    }

    return count;
}

// 5. Function to sum only the fractional parts of the numbers in an array.
double sumFractions(double *myArray, int numItems) {
    double sum = 0.0;

    for (int i = 0; i < numItems; ++i) {
        sum += myArray[i] - (int)myArray[i];
    }

    return sum;
}

// 6. Function to count how many times a value occurs within a specific range, disregarding sign.
int countAbsoluteRangeValues(double *myArray, int numItems, double value) {
    double lowerBound = value - 0.5;
    double upperBound = value + 0.5;
    int count = 0;

    for (int i = 0; i < numItems; ++i) {
        double absValue = myArray[i] < 0 ? -myArray[i] : myArray[i]; // Absolute value
        if (absValue > lowerBound && absValue < upperBound) {
            count++;
        }
    }

    return count;
}

