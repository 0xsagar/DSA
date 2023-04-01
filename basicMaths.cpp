#include <bits/stdc++.h>
using namespace std;

void count_digits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    cout << count << endl;
}

void reverse_digits(int n)
{
    int a = 0, last;
    while (n > 0)
    {
        last = n % 10;
        a = a * 10 + last;
        n /= 10;
    }
    cout << a << endl;
}

void checkPalindrome(int n)
{
    int a = 0, x = n, last;
    while (n > 0)
    {
        last = n % 10;
        a = a * 10 + last;
        n /= 10;
    }
    if (a == x)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

void armstrong(int n)
{
    int count = 0, x = n, y = n, last, number = 0;
    while (x > 0)
    {
        x /= 10;
        count++;
    }
    while (y > 0)
    {
        last = y % 10;
        y /= 10;
        number = number + pow(last, count);
    }
    if (n == number)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

void printDivisors(int n)
{
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }
    vector<int> ls;
    for (int i = 1; i * i <= n; i++) // sqrt(n) can be written here as i * i <= n
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
    {
        cout << it << " ";
    }
}

void isPrime(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if ((n / i) != i)
                count++;
        }
    }
    if (count == 2)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

int main()
{
    int n;
    cin >> n;
    isPrime(n);
}