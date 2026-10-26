Question: Write a C++ program to search an element in a sorted array using the Binary Search algorithm.

#include <iostream>
using namespace std;

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == key) {
            cout << "Element found at position " << mid + 1;
            return 0;
        }
        else if (a[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << "Element not found";

    return 0;
}
Sample Output:
Enter element to search: 40
Element found at position 4
