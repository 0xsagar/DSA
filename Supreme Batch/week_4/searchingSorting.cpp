#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int element = arr[mid];
        if (element == target)
        {
            return mid;
        }
        if (target < element)
        {
            // search left
            end = mid - 1;
        }
        else
        {
            // search right
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

// int firstOcc(int arr[], int size, int target)
// {
// }

int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int size = 10;
    // int target = 9;
    // int indexOfTarget = binarySearch(arr, size, target);
    // cout << "Index of target: " << indexOfTarget;

    // Method 1
    // vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // if (binary_search(v.begin(), v.end(), 9))
    // {
    //     cout << "Found" << endl;
    // }
    // else
    // {
    //     cout << "Not Found" << endl;
    // }

    // Method 2
    //  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //  int size = 10;
    //  if (binary_search(arr, arr + size, 9))
    //  {
    //      cout << "Yes found" << endl;
    //  }
    //  else
    //  {
    //      cout << "Not found" << endl;
    //  }

    return 0;
}