#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
// Time Complexity = O(n square)
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}