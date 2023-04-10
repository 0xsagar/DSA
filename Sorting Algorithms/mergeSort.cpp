#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int mid, int e)
{
    vector<int> temp;
    int left = s;
    int right = mid + 1;

    while (left <= mid && right <= e)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= e)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i - s];
    }
}

void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2; // start+((end-start)/2);
    // left wala part sort karna hai
    mergeSort(arr, s, mid);
    // right wala part sort karna hai
    mergeSort(arr, mid + 1, e);
    // merge
    merge(arr, s, mid, e);
}
// Time complexity = O(N * log(N))
// Space Complexity = O(N)
int main()
{
    int n = 6;
    int arr[6] = {6, 2, 4, 3, 5, 1};

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}