#include <stdio.h>

void insertionSort(int arr[]) {
  int len = sizeof(arr) / sizeof(int);
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


int main() {

  return 0;
}
