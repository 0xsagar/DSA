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
    // Use "unordered_map" for better time complexity than a "map"
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
    map<int, int> mpp;
    // Use "unordered_map" for better time complexity than a "map"
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

// Question: Find the Array Intersection
void arrayIntersection(int demo[], int demo2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (demo[i] == demo2[j])
            {
                cout << demo[i] << " ";
            }
        }
    }
}

// Question: Find the second smallest and second largest element in the array
void secondSmallestandLargestElement(int demo[], int n)
{
    if (n < 2)
        return;
    int smallest = INT_MAX, secondSmallest = INT_MAX, largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (demo[i] < smallest)
        {
            smallest = demo[i];
        }
        else if (demo[i] < secondSmallest && demo[i] != smallest)
        {
            secondSmallest = demo[i];
        }
        if (demo[i] > largest)
        {
            largest = demo[i];
        }
        else if (demo[i] > secondLargest && demo[i] != largest)
        {
            secondLargest = demo[i];
        }
    }
    cout << smallest << " " << secondSmallest << " " << secondLargest << " " << largest << endl;
}

// Question: Check if the array is sorted
bool checkSortedArray(int demo[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (demo[i] < demo[i - 1])
        {
            return 0;
        }
    }
    return 1;
}

bool checkSortedArrayAndRotation(vector<int> &nums)
{
    int count = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[i - 1])
        {
            count++;
        }
    }
    if (nums[0] < nums[nums.size() - 1])
        count++;
    return count <= 1;
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

    int demo[5] = {1, 9, 2, 3, 4};
    int demo2[5] = {1, 8, 3, 4, 6};
    // cin >> key;
    // cout << linearSearch(demo, 10, key);
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

    // duplicateElement(demo, 10);

    // arrayIntersection(demo, demo2, 5);

    // secondSmallestandLargestElement(demo, 5);

    // cout << checkSortedArray(demo, 5);
    // vector<int> nums = {5, 4, 7, 1, 2, 3};
    // cout << checkSortedArrayAndRotation(nums);
}