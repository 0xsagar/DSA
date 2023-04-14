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
    for (int i = 0; i < n - 1; i += 2)
    {
        int temp = demo[i + 1];
        demo[i + 1] = demo[i];
        demo[i] = temp;
        // i++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << demo[i] << " ";
    }
}

// Question: Find unique element in an array using map
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

// Question: Find unique element in an array
void uniqueElement2(int demo[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ demo[i];
    }
    cout << ans << " ";
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

// Question: Find the Array Intersection for sorted Arrays (better complexity)
void arrayIntersection2(int demo[], int demo2[], int n, int m)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (demo[i] == demo2[j])
        {
            ans.push_back(demo[i]);
            i++;
            j++;
        }
        else if (demo[i] < demo2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
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

// Question: Check if the array is sorted and check for rotations also
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

// Question: Pair Sum
void pairSum(int demo[], int n, int s)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (demo[i] + demo[j] == s)
            {
                cout << min(demo[i], demo[j]) << " " << max(demo[i], demo[j]) << endl;
            }
        }
    }
}

// Question: Triplet Sum
void tripletSum(int demo[], int n, int s)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (demo[i] + demo[j] + demo[k] == s)
                {
                    cout << demo[i] << " " << demo[j] << " " << demo[k] << endl;
                }
            }
        }
    }
}

// Question: Sort 0 & 1
void sortZeroOne(int arr0[], int n)
{
    int p1 = 0, p2 = n - 1;
    while (p1 < p2)
    {
        if (arr0[p1] == 0 && p1 < p2)
        {
            p1++;
        }
        if (arr0[p2] == 1 && p1 < p2)
        {
            p2--;
        }
        if (arr0[p1] > arr0[p2] && p1 < p2)
        {
            swap(arr0[p1], arr0[p2]);
            p1++;
            p2--;
        }
    }
    for (int x = 0; x < n; x++)
    {
        cout << arr0[x] << " ";
    }
}

// Question: Sort 0, 1 & 2
void sortZeroOneTwo(int arr[], int n)
{
    // One way to solve this problem is to use the Dutch National Flag algorithm
    int low = 0, mid = 0, high = n - 1;
    // while (mid <= high)
    // {
    //     if (arr[mid] == 0)
    //     {
    //         swap(arr[low], arr[mid]);
    //         low++;
    //         mid++;
    //     }
    //     else if (arr[mid] == 1)
    //     {
    //         mid++;
    //     }
    //     else
    //     {
    //         swap(arr[mid], arr[high]);
    //         high--;
    //     }
    // }

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++], arr[mid++]);
            // low++;
            // mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high--]);
            // high--;
            break;
        }
    }

    for (int x = 0; x < n; x++)
    {
        cout << arr[x] << " ";
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

    int demo[5] = {1, 2, 3, 4, 5};
    int demo2[5] = {1, 2, 3, 4, 6};
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

    // swapAlternate(demo, 5);

    // uniqueElement(demo, 5);

    // uniqueElement2(demo, 5);

    // duplicateElement(demo, 10);

    // arrayIntersection(demo, demo2, 5);

    // arrayIntersection2(demo, demo2, 5, 5);

    // secondSmallestandLargestElement(demo, 5);

    // cout << checkSortedArray(demo, 5);
    // vector<int> nums = {5, 4, 7, 1, 2, 3};
    // cout << checkSortedArrayAndRotation(nums);

    // pairSum(demo, 5, 5);

    // tripletSum(demo, 5, 10);

    // int arr0[9] = {1, 1, 0, 1, 0, 0, 0, 1, 0};
    // sortZeroOne(arr0, 9);

    // int arr[9] = {1, 2, 0, 1, 2, 0, 0, 1, 0};
    // sortZeroOneTwo(arr, 9);
}