#include <stdio.h>

#define MAX_SET_SIZE 10

// Function to perform union of two fuzzy sets
void fuzzyUnion(float set1[], float set2[], float result[], int size) {
    for (int i = 0; i < size; i++) {
        // Union is the maximum of the membership degrees at each index
        result[i] = (set1[i] > set2[i]) ? set1[i] : set2[i];
    }
}

// Function to perform intersection of two fuzzy sets
void fuzzyIntersection(float set1[], float set2[], float result[], int size) {
    for (int i = 0; i < size; i++) {
        // Intersection is the minimum of the membership degrees at each index
        result[i] = (set1[i] < set2[i]) ? set1[i] : set2[i];
    }
}

// Function to display a fuzzy set
void displayFuzzySet(float set[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", set[i]);
    }
    printf("}\n");
}

int main() {
    int size;

    printf("Enter the size of the fuzzy sets (up to %d): ", MAX_SET_SIZE);
    scanf("%d", &size);

    if (size > MAX_SET_SIZE || size <= 0) {
        printf("Invalid size. Please choose a size between 1 and %d.\n", MAX_SET_SIZE);
        return 1;
    }

    float fuzzySet1[MAX_SET_SIZE], fuzzySet2[MAX_SET_SIZE], resultUnion[MAX_SET_SIZE], resultIntersection[MAX_SET_SIZE];

    // Input fuzzy set 1
    printf("Enter the membership degrees for fuzzy set 1:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &fuzzySet1[i]);
    }

    // Input fuzzy set 2
    printf("Enter the membership degrees for fuzzy set 2:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &fuzzySet2[i]);
    }

    // Perform union
    fuzzyUnion(fuzzySet1, fuzzySet2, resultUnion, size);

    // Perform intersection
    fuzzyIntersection(fuzzySet1, fuzzySet2, resultIntersection, size);

    // Display results
    printf("\nFuzzy Set 1: ");
    displayFuzzySet(fuzzySet1, size);

    printf("Fuzzy Set 2: ");
    displayFuzzySet(fuzzySet2, size);

    printf("Union: ");
    displayFuzzySet(resultUnion, size);

    printf("Intersection: ");
    displayFuzzySet(resultIntersection, size);

    return 0;
}

