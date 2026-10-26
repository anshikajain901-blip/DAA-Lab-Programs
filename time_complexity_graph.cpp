Question: Write a C++ program to calculate and compare the time complexities 
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
O(n),O(nlogn), and 
O
(
n
2
)
O(n 
2
 ) for different input sizes and display the results in tabular form for plotting a graph.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sizes[] = {1, 2, 4, 8, 16, 32, 64};
    int n = 7;

    cout << "Time Complexity Comparison\n\n";
    cout << "n\tO(1)\tO(log n)\tO(n)\tO(n log n)\tO(n^2)\n";

    for (int i = 0; i < n; i++) {
        int x = sizes[i];
        int logn = (int)log2(x);

        cout << x << "\t"
             << 1 << "\t"
             << logn << "\t\t"
             << x << "\t"
             << x * logn << "\t\t"
             << x * x << endl;
    }

    return 0;
}
