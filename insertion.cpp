#include <iostream>
using namespace std;

void insertion_sort(int* arr, const int size) {
    for (int i = 1; i < size; i++) {
        int cur = arr[i];
        int pos = i;
        while (pos > 0 and arr[pos - 1] > cur) {
            arr[pos] = arr[pos - 1];
            pos--;
        }
        arr[pos] = cur;
    }
}