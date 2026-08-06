#include <iostream>
#include <climits>     // INT_MIN
#include <algorithm>    // max
using namespace std;

int printmax(int arr[], int n, int idx) {
    if (idx == n)
        return INT_MIN;

    return max(arr[idx], printmax(arr, n, idx + 1));
}
int main() {
    int arr[] = {2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << printmax(arr, n, 0);
}
