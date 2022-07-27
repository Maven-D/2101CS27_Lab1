#include <stdio.h>

int length(int arr[]) {
  return sizeof(arr) / sizeof(int);
}

void insertionSort(int arr[]) {
  int len = length(arr);
  for (int i = 0; i < len; i++) {
      val = arr[i];
      int j = i - 1;

      // looping till we reach the correct position
      while (j >= 0 && arr[j] > val) {
        arr[j + 1] = arr[j];
        j--;
      }

      arr[j + 1] = val;
    }
}

void swap (int *num1, int *num2) {
  *num1 ^= *num2;
  *num2 ^= *num1;
  *num1 ^= *num2;
}

void selectionSort(int arr[]) {
  int len = length(arr);
  for (int i = 0; i < len - 1; i++) {
    int min_index = i;

    // looping in the unsorted subarray for minimum element
    for (int j = i + 1; j < len; j++)
      if (arr[j] < arr[min_index])
        min_index = j;

    swap(&arr[i], &arr[min_index]);
  }
}

void bubbleSort(int arr[]) {
    int len = length(arr);

    for (int i = 0; i < len - 1; i++)

        // looping and placing highest at the end by swapping adjacent
        for (int j = 0; j < len - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);

}

int main() {

  return 0;
}
