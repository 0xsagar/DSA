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

// Question: Find the pivot index from which the sum of elements at the left and the sum of elements at the right are equal
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
    // Do it again with better time complexity
}

int getPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

// Search In Rotated Sorted Array [Coding Ninja]
int getPivot1(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarySearch1(int arr[], int s, int e, int key)
{
    int start = s, end = e, mid;
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
int findPosition1(int arr[], int n, int k)
{
    int pivot = getPivot1(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarySearch1(arr, pivot, n - 1, k);
    }
    else
    {
        return binarySearch1(arr, 0, pivot - 1, k);
    }
}

// Find the integer part of square root of the element
long long int squareRootInteger(int n)
{
    int s = 0, e = n;
    long long int ans = -1;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

// Question: Book Allocation Problem
bool isPossible1(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int j = 0; j < n; j++)
    {
        if (pageSum + arr[j] <= mid)
        {
            pageSum += arr[j];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[j] > mid)
            {
                return false;
            }
            pageSum = arr[j];
        }
    }
    return true;
}
int bookAllocation(int arr[], int n, int m)
{
    int s = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible1(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

// Question: Painter's Partition Problem
bool isPossible2(int arr[], int n, int k, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int j = 0; j < n; j++)
    {
        if (pageSum + arr[j] <= mid)
        {
            pageSum += arr[j];
        }
        else
        {
            studentCount++;
            if (studentCount > k || arr[j] > mid)
            {
                return false;
            }
            pageSum = arr[j];
        }
    }
    return true;
}
int painterPartition(int arr[], int n, int k)
{
    int s = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible2(arr, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

// Question: Aggressive Cows
bool isPossible3(vector<int> &stalls, int k, int mid)
{
    int cowCount = 1;
    int lastPosition = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPosition >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPosition = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0, maxi = -1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible3(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n = 8, key;
    // cout << "Enter the number you want to find in the array: ";
    // cin >> key;
    // int arr[8] = {6, 7, 8, 9, 1, 2, 3, 4};
    // cout << "Index at which the key is present is: " << binarySearch(arr, n, key);
    // cout << "First occurrence of the key is at index: " << firstOcc(arr, n, key) << endl;
    // cout << "Last occurrence of the key is at index: " << lastOcc(arr, n, key) << endl;

    // cout << pivotIndex(arr, n);
    // cout << "Pivot is at index: " << getPivot(arr, n);
    // cout << "Index: " << findPosition1(arr, n, key);

    // int tempSol = squareRootInteger(key);
    // cout << "Final ans: " << morePrecision(key, 3, tempSol);

    // int arr[4] = {10, 20, 30, 40};
    // cout << bookAllocation(arr, 4, 2);

    // cout << painterPartition(arr, 4, 2);

    // vector<int> stalls = {4, 2, 1, 3, 6};
    // cout << aggressiveCows(stalls, 2);
}