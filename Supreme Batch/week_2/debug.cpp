// Q1: Add integers from 1 to N and display the sum on console.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int8_t sum = 0;
//     for (int i = 1; i <= n; ++i)
//     {
//         sum += i;
//     }
//     cout << (int)sum << endl;
//     return 0;
// }

// Q2: Print full pyramid like an Equilateral Triangle
// #include <iostream>
// using namespace std;
// int main()
// {
//     int k, n;
//     cout << "Enter the number of rows : ";
//     cin >> n;
//     cout << " ";
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= n - i; j++)
//             cout << " ";

//         for (int j = 1, k = 2 * i - 1; j <= 2 * i - 1; j++, k--)
//         {
//             if (j <= k)
//                 cout << j;
//             else
//                 cout << k;
//         }
//         cout << endl;

//         cout << " ";
//     }
//     return 0;
// }

// Q3: Left Triangle star Pattern
// #include <iostream>
// using namespace std;
// int main()
// {
//     // size of the triangle
//     int size = 5;
//     // loop to print the pattern
//     for (int i = 1; i <= size; i++)
//     {
//         // print column
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// Q4: Reverse Pyramid star pattern.
// #include <iostream>
// using namespace std;
// int main()
// {
//     // size of the pyramid
//     int size = 5;
//     for (int i = 0; i < size; i++)
//     {
//         // print spaces
//         for (int j = 0; j < i; j++)
//         {
//             cout << "  ";
//         }
//         // print stars
//         for (int k = 0; k < 2 * (size - i) - 1; k++)
//         {
//             cout << "* ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// Q5: Reverse Pyramid star pattern.
#include <iostream>
using namespace std;
int main()
{
    // heart star pattern
    int size;
    cin >> size;

    for (int i = size / 2; i < size; i += 2)
    {
        // print first spaces
        for (int j = 1; j < size - i; j += 2)
        {
            cout << " ";
        }
        // print first stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // print second spaces
        for (int j = 1; j < size - i + 1; j++)
        {
            cout << " ";
        }
        // print second stars
        for (int j = 1; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    // lower part
    // inverted pyramid
    for (int i = size; i > 0; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < i * 2; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}