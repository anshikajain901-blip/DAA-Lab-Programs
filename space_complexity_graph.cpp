Question: Write a C++ program to calculate and compare the space complexity of different algorithms, such as 
O
(
1
)
O(1), 
O
(
log
⁡
n
)
O(logn), 
O
(
n
)
O(n), and 
O
(
n
2
)
O(n 
2
 ), for different input sizes and display the results in tabular form for plotting a graph.

#include <iostream>
using namespace std;

int main() {
    int sizes[] = {1, 2, 4, 8, 16, 32, 64};
    int n = 7;

    cout << "Space Complexity Comparison\n\n";
    cout << "n\tO(1)\tO(log n)\tO(n)\tO(n^2)\n";

    for (int i = 0; i < n; i++) {
        int x = sizes[i];
        int logn = 0;

        for (int temp = x; temp > 1; temp /= 2) {
            logn++;
        }

        cout << x << "\t"
             << 1 << "\t"
             << logn << "\t\t"
             << x << "\t"
             << x * x << endl;
    }

    return 0;
}
Sample Output
