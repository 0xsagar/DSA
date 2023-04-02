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

int main()
{
    int n;
    cin >> n;
    printRevNumBackTrack(1, n);
}