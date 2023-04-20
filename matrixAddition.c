#include <stdio.h>

int main() {
  const int ROWS = 2;
  const int COLS = 2;
  int a[ROWS][COLS], b[ROWS][COLS], sum[ROWS][COLS], i, j;

  printf("Enter two 2x2 Matrices: \n");
  printf("          _ _ _ _ \n");
  printf("Matrix 1: ");
  scanf("%d %d %d %d", &a[0][0], &a[0][1], &a[1][0], &a[1][1]);
  printf("          _ _ _ _ \n");
  printf("Matrix 2: ");
  scanf("%d %d %d %d", &b[0][0], &b[0][1], &b[1][0], &b[1][1]);

  // Adding two matrices
  for (i = 0; i < ROWS; i++) { // Traverse Rows
    for (j = 0; j < COLS; j++) { // Traverse Columns
      sum[i][j] = a[i][j] + b[i][j];
    }
  }

  // Print the sum
  printf("Matrix 1 + Matrix 2: \n");
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      printf("%d ", sum[i][j]);
      // Print a newline
      if (j == 1) {
        printf("\n");
      }
    }
  }

  return 0;
}