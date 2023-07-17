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
    //         cout << it.first << endl;
    //     }
    // }

    // Occurrance (for all elements repeating only 2 times)
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             cout << arr[i] << endl;
    //         }
    //     }
    // }

    // Positioning methods (only for 1 element repeating twice in the array)
    // while (arr[0] != arr[arr[0]])
    // {
    //     swap(arr[0], arr[arr[0]]);
    // }
    // cout << arr[0];
}

// Question: Find the missing element of the array
void findMissing(int arr[], int n)
{
    int missing = 0;
    int largest = INT_MIN, smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest element is: " << largest << endl;
    int total_sum = (largest * (largest + 1)) / 2;
    cout << "Total sum of the numbers: " << total_sum << endl;
    for (int i = 0; i < n; i++)
    {
        total_sum -= arr[i];
    }
    cout << "The missing element is: " << total_sum;
}

// Question: Find the first repeating element
int findFirstRepeating(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // cout << arr[i] << " " << arr[j] << endl;
            if (arr[i] == arr[j])
            {
                cout << arr[j] << endl;
                return 0;
            }
        }
    }
    cout << "No repeating element found!" << endl;
    return 0;
}

// Question: Find common element in 3 arrays
void findCommon(int arr1[], int arr2[], int arr3[], int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr1[i]]++;
        mpp[arr2[i]]++;
        mpp[arr3[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second == 3)
        {
            cout << it.first << endl;
        }
    }
}

// Question: Print the matrix in wave form
void waveMatrix(vector<vector<int>> v)
{
    int rows = v.size();
    int cols = v[0].size();
    for (int i = 0; i < cols; i++)
    {
        if ((i & 1) == 0)
        {
            // even number of rows == top to bottom
            for (int j = 0; j < rows; j++)
            {
                cout << v[j][i] << " ";
            }
        }
        else
        {
            // odd number of rows == bottom to top
            for (int j = rows - 1; j >= 0; j--)
            {
                cout << v[j][i] << " ";
            }
        }
    }
}

// Question: Print the matrix in spiral form
void spiralMatrix(vector<vector<int>> &v)
{
    vector<int> ans;
    int rows = v.size();
    int cols = v[0].size();
    int total_elements = rows * cols;

    int startingRow = 0;
    int endingCol = cols - 1;
    int endingRow = rows - 1;
    int startingCol = 0;

    int count = 0;

    while (count < total_elements)
    {
        // print startingRow
        for (int i = startingCol; i <= endingCol && count < total_elements; i++)
        {
            ans.push_back(v[startingRow][i]);
            count++;
        }
        startingRow++;

        // print endingCol
        for (int i = startingRow; i <= endingRow && count < total_elements; i++)
        {
            ans.push_back(v[i][endingCol]);
            count++;
        }
        endingCol--;

        // print endingRow
        for (int i = endingCol; i >= startingCol && count < total_elements; i--)
        {
            ans.push_back(v[endingRow][i]);
            count++;
        }
        endingRow--;

        // print startingCol
        for (int i = endingRow; i >= startingRow && count < total_elements; i--)
        {
            ans.push_back(v[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    // printing the new vector with spiral sequence
    for (auto it : ans)
    {
        cout << it << " ";
    }
}

// Question: Add two string of integers
class ATS
{
public:
    string addTwoString(int *a, int n, int *b, int m)
    {
        int carry = 0;
        string ans;
        int i = n - 1;
        int j = m - 1;
        while (i >= 0 && j >= 0)
        {
            int x = a[i] + b[j] + carry;
            int digit = x % 10;
            carry = x / 10;
            ans.push_back(digit + '0');
            i--, j--;
        }
        while (i >= 0)
        {
            int x = a[i] + 0 + carry;
            int digit = x % 10;
            carry = x / 10;
            ans.push_back(digit + '0');
            i--;
        }
        while (j >= 0)
        {
            int x = 0 + b[j] + carry;
            int digit = x % 10;
            carry = x / 10;
            ans.push_back(digit + '0');
            j--;
        }
        if (carry)
        {
            ans.push_back(carry + '0');
        }

        while (ans[ans.size() - 1] == '0')
        {
            ans.pop_back();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Question: Find factiroals of large numbers
class LargeFactorial
{

public:
    vector<int> factorialLarge(int N)
    {
        vector<int> ans;
        ans.push_back(1);
        int carry = 0;
        for (int i = 2; i <= N; i++)
        {
            for (int j = 0; j < ans.size(); j++)
            {
                int x = ans[j] * i + carry;
                ans[j] = x % 10;
                carry = x / 10;
            }
            if (carry)
            {
                ans.push_back(carry);
                // ans + carry;
            }
            carry = 0;
        }
        reverse(ans.begin(), ans.end());
        // for (auto i : ans)
        // {
        //     cout << i << " ";
        // }
        return ans;
    }
};

// Question: Find factiroals of large numbers
class Factorial
{

public:
    void GetFactorial(int number)
    {

        int store[1000] = {0};
        int index = 0;
        int result = number;

        // Store the number in the reverse order.
        // Example: Number 123 is stored as 3, 2, 1
        //                                  ^  ^  ^
        //                                  |  |  |
        //                          Index   0  1  2
        while (result >= 1)
        {
            store[index++] = result % 10;
            result /= 10;
        }
        number--;

        int carry = 0;
        while (number > 0)
        {
            int i = 0;
            while (i < index)
            {
                result = store[i] * number + carry;
                store[i++] = result % 10;
                carry = result / 10;
            }
            while (carry > 0)
            {
                store[i++] = carry % 10;
                carry /= 10;
            }
            number -= 1;
            index = i;
        }

        cout << "Factorial : ";
        for (int i = index - 1; i >= 0; i--)
        {
            cout << store[i];
        }
        cout << endl;
    }
};

int main()
{
    // int arr[9] = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    // int size = 9;
    // sortZeroOneTwos(arr, size);

    // int arr[6] = {-1, -2, -3, 1, -4, 2};
    // int size = 6;
    // sortNegative(arr, size);

    // int arr[7] = {4, 1, 2, 1, 5, 5, 6};
    // int size = 7;
    // findDuplicate(arr, size);

    // int arr[7] = {1, 2, 3, 4, 6, 5, 8};
    // int size = 7;
    // findMissing(arr, size);

    // int arr[6] = {1, 2, 3, 4, 3, 5};
    // int size = 6;
    // findFirstRepeating(arr, size);

    // int arr1[5] = {1, 2, 3, 4, 5};
    // int arr2[5] = {2, 3, 6, 7, 8};
    // int arr3[5] = {1, 2, 3, 7, 8};
    // int size = 5;
    // findCommon(arr1, arr2, arr3, size);

    // vector<vector<int>> v{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    // waveMatrix(v);

    // vector<vector<int>> v{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    // spiralMatrix(v);

    // ATS a;
    // a.addTwoString(1234, 4, 1234, 4);

    LargeFactorial lf;
    lf.factorialLarge(7);

    // Factorial f;
    // f.GetFactorial(7);
    return 0;
}