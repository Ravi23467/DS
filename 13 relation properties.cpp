#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

// Function to check if a relation is reflexive
bool isReflexive(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        if (!matrix[i][i]) {
            return false;
        }
    }
    return true;
}

// Function to check if a relation is symmetric
bool isSymmetric(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}

// Function to check if a relation is transitive
bool isTransitive(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j]) {
                for (int k = 0; k < size; k++) {
                    if (matrix[j][k] && !matrix[i][k]) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

// Function to check if two relations are equivalent
bool areEquivalent(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int size) {
    // Relations are equivalent if they are reflexive, symmetric, and transitive
    return isReflexive(matrix1, size) && isSymmetric(matrix1, size) && isTransitive(matrix1, size) &&
           isReflexive(matrix2, size) && isSymmetric(matrix2, size) && isTransitive(matrix2, size);
}

int main() {
    int size;
    printf("Enter the size of the set (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size of the set.\n");
        return 1;
    }

    int relationMatrix[MAX_SIZE][MAX_SIZE];

    // Input relation matrix
    printf("Enter the relation matrix (%dx%d elements, 0 or 1):\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &relationMatrix[i][j]);
        }
    }

    // Test and display properties
    printf("\nProperties of the relation:\n");
    printf("Reflexive: %s\n", isReflexive(relationMatrix, size) ? "Yes" : "No");
    printf("Symmetric: %s\n", isSymmetric(relationMatrix, size) ? "Yes" : "No");
    printf("Transitive: %s\n", isTransitive(relationMatrix, size) ? "Yes" : "No");

    // Test equivalence
    printf("\nTesting Equivalence:\n");
    
    int anotherRelationMatrix[MAX_SIZE][MAX_SIZE];
    printf("Enter another relation matrix for testing equivalence:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &anotherRelationMatrix[i][j]);
        }
    }

    if (areEquivalent(relationMatrix, anotherRelationMatrix, size)) {
        printf("The two relations are equivalent.\n");
    } else {
        printf("The two relations are not equivalent.\n");
    }

    return 0;
}

