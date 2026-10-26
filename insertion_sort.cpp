Question: Write a C++ program to sort an array of elements in ascending order using the Insertion Sort algorithm.

#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 3, 8, 1, 2};
    int n = 5;

    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
