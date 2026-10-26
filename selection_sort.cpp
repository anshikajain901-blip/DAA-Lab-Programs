Question: Write a C++ program to sort an array of elements in ascending order using the Selection Sort algorithm.

#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 3, 8, 1, 2};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }

        swap(a[i], a[minIndex]);
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
