#include <bits/stdc++.h>
using namespace std;
// Implementation of Binary Search
int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    mid = (start + (end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + (end - start) / 2);
    }
    return -1;
}

// Question: Find the first and last occurrence of an element from the array
int firstOcc(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < k) // Right me jao
        {
            s = mid + 1;
        }
        else if (arr[mid] > k) // Left me jao
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < k) // Right me jao
        {
            s = mid + 1;
        }
        else if (arr[mid] > k) // Left me jao
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

//Question: Find the pivot index from which the sum of elements at the left and the sum of elements at the right are equal 
int pivotIndex(int arr[], int n)
{
    int s = 0, e = n - 1, sumLeft, sumRight;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        sumLeft = 0, sumRight = 0;
        for (int i = 0; i <= e; i++)
        {
            if (i < mid)
            {
                sumLeft += arr[i];
            }
            if (i > mid)
            {
                sumRight += arr[i];
            }
        }
        if (sumLeft == sumRight)
        {
            return mid;
        }
        else if (sumLeft < sumRight)
        {
            mid++;
        }
        else
        {
            mid--;
        }
    }
    return -1;
}

int main()
{
    int n = 8, key;
    cout << "Enter the number you want to find in the array: ";
    cin >> key;
    int arr[8] = {1, 1, 2, 2, 2, 2, 3, 10};
    // cout << "Index at which the key is present is: " << binarySearch(arr, n, key);
    // cout << "First occurrence of the key is at index: " << firstOcc(arr, n, key) << endl;
    // cout << "Last occurrence of the key is at index: " << lastOcc(arr, n, key) << endl;

    cout << pivotIndex(arr, n);
}