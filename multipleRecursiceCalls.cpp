#include <bits/stdc++.h>
using namespace std;

int nFibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    // return last + secondLast
    return nFibonacci(n - 1) + nFibonacci(n - 2);

    // fast solution
    // int n0 = 0, n1 = 1, sum = 0;
    // for (int i = 2; i <= n; i++)
    // {
    //     sum = n0 + n1;
    //     n0 = n1;
    //     n1 = sum;
    // }
    // return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << nFibonacci(n);
}