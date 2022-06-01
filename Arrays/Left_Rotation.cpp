#include <iostream>
using namespace std;

// A code for the process of rotating an array by a specified digit.
// This operation can be performed in 2 ways:
// 1) Time [O(n)] and space [O(n)]
// 2) Time [O(n)] and space [O(1)]

void leftRotate(int arr[], int n, int k)
{
    int mod = k % n;
    for (int i = 0; i < n; i++)
        cout << (arr[(mod + i) % n]) << " ";
 
    cout << "\n";
}
 
int main()
{
    int arr[] = { 1, 3, 5, 7, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int k = 2;
    leftRotate(arr, n, k);
 
    return 0;
}
