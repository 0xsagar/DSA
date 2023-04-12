#include <bits/stdc++.h>
using namespace std;
// Question: Find the minimum and maximum element of an array
void minMaxArray(int *arr, int n, int &minimum, int &maximum)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    cout << "Min: " << minimum << " | Max: " << maximum << endl;
}

// Question: Print sum of all elements in an array
void arraySum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of all the elements in an array is " << sum << endl;
}

// Question: Implement Linear Search Algorithm
bool linearSearch(int demo[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (demo[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

// Question: Reverse an array
void reverseArray(int demo[], int n)
{
    for (int i = 0; i < (n / 2); i++)
    {
        int temp = demo[n - i - 1];
        demo[n - i - 1] = demo[i];
        demo[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << demo[i] << " ";
    }
}

// Question: Swap alternate elements of an array
void swapAlternate(int demo[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int temp = demo[i + 1];
        demo[i + 1] = demo[i];
        demo[i] = temp;
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << demo[i] << " ";
    }
}

// Question: Find unique element in an array
void uniqueElement(int demo[], int n)
{
    // pre-compute
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[demo[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            cout << it.first << " ";
        }
    }
}

// Question: Find duplicate elements in an array
void duplicateElement(int demo[], int n)
{
    // pre-compute
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[demo[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second >= 2)
        {
            cout << it.first << " ";
        }
    }
}

int main()
{
    int n, minimum = INT_MAX, maximum = INT_MIN, key;
    // cin >> n;
    // int arr[100];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // minMaxArray(arr, n, minimum, maximum);
    // arraySum(arr, n);

    int demo[10] = {1, 1, 2, 3, 4, 6, 6, 8, 10, 10};
    // cin >> key;
    //  bool found = linearSearch(demo, 10, key);
    //  if (found)
    //  {
    //      cout << "Element is present" << endl;
    //  }
    //  else
    //  {
    //      cout << "Element is not present" << endl;
    //  }

    // reverseArray(demo, 10);

    // swapAlternate(demo, 10);

    // uniqueElement(demo, 10);

    duplicateElement(demo, 10);
}