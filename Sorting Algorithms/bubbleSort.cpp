#include <bits/stdc++.h>
using namespace std;

// void bubbleSort(int arr[], int n)
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         int didSwap = 0;
//         for (int j = 0; j <= i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//                 didSwap = 1;
//             }
//         }
//         if (didSwap == 0)
//         {
//             break;
//         }
//     }
// }

void bubbleSort(int arr[], int n)
{
    int totalSwaps = 0;
    // for rounds 1 to n - 1
    for (int i = 1; i < n; i++)
    {

        bool didSwap = false;
        // process elements till (n - 1)th index
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didSwap = true;
                totalSwaps++;
            }
        }
        if (didSwap == false)
        {
            break;
        }
    }
    cout << "Total Number of Swaps: " << totalSwaps << endl;
}

// Best Case Time Complexity = O(n)
// Worst, Avg Case Time Complexity = O(n square)

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}