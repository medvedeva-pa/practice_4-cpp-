#include <iostream>
using namespace std;

void selection_sort(int* arr, const int size) {
    for (int i = 0; i < size; i++) {
        int min_index = i;
        int buf;
        for (int j = i + 1; j < size; j++) {
            if (arr[min_index] > arr[j]) {
                min_index = j;
            }
        }
        buf = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = buf;
    }
}
