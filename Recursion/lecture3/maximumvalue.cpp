#include <iostream>
#include <climits>
using namespace std;

void printmax(int arr[], int n, int idx, int max)
{
    if(idx == n)
    {
        cout << max;
        return;
    }

    if(max < arr[idx])
        max = arr[idx];

    printmax(arr, n, idx + 1, max);
}

int main()
{
    int x;
    cin >> x;

    int arr[x];

    for(int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    printmax(arr, x, 0, INT_MIN);

    return 0;
}