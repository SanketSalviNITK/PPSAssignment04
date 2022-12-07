#include <stdio.h>

int main(void) {
  int matrix1[3][3], matrix2[3][3], matrix3[3][3];
  printf("Enter values for matrix 1:");
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      scanf("%d", &matrix1[i][j]);
  printf("Matrix 1:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      printf("%d  ", matrix1[i][j]);
    printf("\n");
  }

  printf("Enter values for matrix 2:");
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      scanf("%d", &matrix2[i][j]);
  printf("Matrix 2:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      printf("%d  ", matrix2[i][j]);
    printf("\n");
  }

  printf("Addition of Matrices is:");
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
  printf("Matrix 3:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      printf("%d  ", matrix3[i][j]);
    printf("\n");
  }
  printf("Subtraction of Matrices is:");
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
  printf("Matrix 3:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      printf("%d  ", matrix3[i][j]);
    printf("\n");
  }

  return 0;
}