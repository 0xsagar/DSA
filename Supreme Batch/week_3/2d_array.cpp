#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

void printRowSum(int arr[][3], int rows, int cols)
{
    int sum = 0;
    // row-wise traversal
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of the row: " << sum << endl;
        sum = 0;
    }
}

void printColSum(int arr[][3], int rows, int cols)
{
    int sum = 0;
    // col-wise traversal
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += arr[j][i];
        }
        cout << "Sum of the col: " << sum << endl;
        sum = 0;
    }
}

bool findKey(int arr[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int getMax(int arr[][3], int rows, int cols)
{
    int maxi = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    // cout << "Max value in array: " << maxi << endl;
    return maxi;
}

int getMin(int arr[][3], int rows, int cols)
{
    int mini = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }
    // cout << "Max value in array: " << maxi << endl;
    return mini;
}

void transposeArr(int arr[][3], int rows, int cols, int transpose[][3])
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // declare 2D Array
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3, key = 7;
    // printRowSum(arr, rows, cols);
    // cout << endl;
    // printColSum(arr, rows, cols);
    // cout << endl;
    // cout << findKey(arr, rows, cols, key) << endl;
    // cout << "Max value in array : " << getMax(arr, rows, cols) << endl;
    // cout << "Min value in array : " << getMin(arr, rows, cols) << endl;
    int transpose[3][3];
    transposeArr(arr, rows, cols, transpose);
    return 0;
}