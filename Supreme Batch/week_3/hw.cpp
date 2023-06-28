#include <bits/stdc++.h>
using namespace std;

// Question: Sort 0, 1 & 2
void sortZeroOneTwos(int arr[], int n)
{
    // use the Dutch National Flag algorithm
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[high]);
            high--;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Question: Move all -ve number to one side of the array
void sortNegative(int arr[], int n)
{
    // insertion sort will shift all the negative element to the left side
    // for (int i = 0; i < n; i++)
    // {
    //     int j = i;
    //     while (j > 0 && arr[j - 1] > arr[j])
    //     {
    //         swap(arr[j - 1], arr[j]);
    //         j--;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // sort cpp stl
    // sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Dutch National Flag = 2 pointer approach
    int low = 0, high = n - 1;
    while (low <= high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
        }
    }
    // Time Complexity = O(n)
    // Space Complexity = O(1)

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Question: Find duplicate element
void findDuplicate(int arr[], int n)
{
    // Map method
    // map<int, int> mpp;
    // for (int i = 0; i < n; i++)
    // {
    //     mpp[arr[i]]++;
    // }
    // for (auto it : mpp)
    // {
    //     if (it.second >= 2)
    //     {
    //         cout << it.first << " ";
    //     }
    // }

    // Occurrance
    // int occ = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             occ = arr[i];
    //         }
    //     }
    // }
    // cout << occ;

    // Positioning methods
    // while (arr[0] != arr[arr[0]])
    // {
    //     swap(arr[0], arr[arr[0]]);
    // }
    // cout << arr[0];
}

// Question

int main()
{
    // int arr[9] = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    // int size = 9;
    // sortZeroOneTwos(arr, size);

    // int arr[6] = {-1, -2, -3, 1, -4, 2};
    // int size = 6;
    // sortNegative(arr, size);

    // int arr[7] = {4, 1, 2, 3, 5, 6, 6};
    // int size = 7;
    // findDuplicate(arr, size);
}