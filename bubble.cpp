#include <iostream>
using namespace std;

void bubble_sort(int* arr, const int size) {
    bool sorted = false;
    for (int p = 0; p < size; p++) {
        sorted = true;
        for (int i = 0; i < size-p; i++) {
            int inext = i+1;
            if (arr[i] > arr[inext]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
