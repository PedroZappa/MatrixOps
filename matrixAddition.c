#include <stdio.h>

int main() {
  // Matrix to store the sum + looping variables
  int sum[2][2], i, j;
  // Declare two matrices to be added
  int a[2][2] = {{2, 3}, {4, 7}};
  int b[2][2] = {{3, 1}, {2, 4}};

  // Adding two matrices
  for (i = 0; i < 2; i++) { // Traverse Rows
    for (j = 0; j < 2; j++) { // Traverse Columns
      sum[i][j] = a[i][j] + b[i][j];
    }
  }

  // Print the sum
  printf("Sum of the two matrices: \n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d ", sum[i][j]);
      // Print a newline
      if (j == 1) {
        printf("\n");
      }
    }
  }

  return 0;
}