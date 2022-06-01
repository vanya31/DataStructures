//Through this program we aim to select the kth smallest element from a given array.
//This can be carried out through quite a many methods:
//1) Using O(nlogn) algorithm for sorting [Merge Sort, Heap Sort] and printing the last element.
//2) Using sets in C++ STL. This will be done through binary search with an average case complexity of O(nlogn).
//3) Using quickselect (Quick Sort in the first step) with an average case complexity of O(n).

#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
//Method 1
int kthSmallest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[k - 1];
}

int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;
    cout << "K'th smallest element is " << kthSmallest(arr, n, k)<<"\n";
    
    //Method 2
    set<int> s(arr, arr + n);
    set<int>::iterator itr
        = s.begin();
    advance(itr, k - 1); 
 
    cout << *itr << "\n";
 
    return 0;
}
    