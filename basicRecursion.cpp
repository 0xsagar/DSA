#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n) // Time complexity = O(N)
{
    if (i > n) // base condition
    {
        return;
    }
    cout << "Sagar" << endl;
    printName(i + 1, n);
}

void printNumbers(int i, int n) // Time complexity = O(N)
{
    if (i > n) // base condition
    {
        return;
    }
    cout << i << " ";
    printNumbers(i + 1, n);
}

void printRevNumbers(int i, int n) // Time complexity = O(N)
{
    if (i < 1)
    {
        return;
    }
    cout << i << " ";
    printRevNumbers(i - 1, n);
}

void printNumBackTrack(int i, int n) // Time complexity = O(N)
{
    if (i < 1)
    {
        return;
    }
    printNumBackTrack(i - 1, n);
    cout << i << " ";
}

void printRevNumBackTrack(int i, int n) // Time complexity = O(N)
{
    if (i > n)
    {
        return;
    }
    printRevNumBackTrack(i + 1, n);
    cout << i << " ";
}

void printSum1(int i, int sum) // parameterized way
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    printSum1(i - 1, sum + i);
}

int printSum2(int n) // functional way
{
    if (n == 0)
        return 0;
    return n + printSum2(n - 1); // use "cout" to print from the function as it is int function not a void function
}

int printFactorial(int n)
{
    if (n == 1)
        return 1;
    return (n * printFactorial(n - 1));
}

void reverseArray1(int l, int r, int arr[]) // 2 pointers
{
    if (l >= r)
    {
        return;
    }
    swap(arr[l], arr[r]);
    reverseArray1(l + 1, r - 1, arr);
}

void reverseArray2(int i, int n, int arr[]) // 1 pointer
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverseArray2(i + 1, n, arr);
}

void checkPalindrome1(int i, int n, string &str)
{
    if (i >= n / 2)
    {
        cout << "true" << endl;
        return;
    }
    if (str[i] == str[n - i - 1])
    {
        checkPalindrome1(i + 1, n, str);
    }
    else
    {
        cout << "false" << endl;
        return;
    }
}

bool checkPalindrome2(int i, string &str)
{
    if (i >= str.size() / 2)
        return true;
    if (str[i] != str[str.size() - i - 1])
        return false;
    return checkPalindrome2(i + 1, str);
}

int main()
{
    int n;
    string str = "ssaass";
    n = str.length();
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    checkPalindrome1(0, n, str);
    // cout << checkPalindrome2(0, str);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}