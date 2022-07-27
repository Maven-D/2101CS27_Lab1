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

void merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // create temp arrays
    int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];


    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }


    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int left, int right)
{
    if (left < right) {

        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        // swapping if greater than pivot
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int partition_index = partition(arr, low, high);

        // sorting both the subarrays
        quickSort(arr, low, partition_index - 1);
        quickSort(arr, partition_index + 1, high);
    }
}

int main() {

  return 0;
}
