#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort(int arr[]);
void swap(int *xp, int *yp);

int main() {
  int arr[10];
  int i = 0;
  printf("Enter 10 numbers. One at a time, then press enter. If no more numbers then enter A.\n");

  for (i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  sort(arr);

  printf("\n");

  return 0;
}

void sort(int arr[]) {
  int i, j; 
  for (i = 0; i < 9; i++)       
    for (j = 0; j < 10-i-1; j++)  
      if (arr[j] > arr[j+1]) 
        swap(&arr[j], &arr[j+1]); 

  for (i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }
}

void swap(int *xp, int *yp) { 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 