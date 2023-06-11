#include <bits/stdc++.h>
using namespace std;

// Q1
// int main()
// {
//     int i = 0;
//     i = i + 1;
//     cout << i;
//     cout << ++i;
// }

// Q2
// int main()
// {
//     short i = 2300, j = 4322;
//     cout << "i + j = " << (i + j);
// }

// Q3
// int main()
// {
//     float l = 2, b = 2;
//     float P = 2 * (l + b);
//     cout << "Perimeter = " << P;
// }

// Q4
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Q5
// int main()
// {
//     int n;
//     cin >> n;
//     bool isPrime = true;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }
//     if (isPrime)
//     {
//         cout << "Prime" << endl;
//     }
//     else
//     {
//         cout << "Not Prime" << endl;
//     }
//     return 0;
// }

// Q6
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = i + 1; j <= n; j++)
//         {
//             if (j == i + 1 || i == 0 || j == n)
//             {
//                 cout << j << " ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// Q7
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = i; j < 2 * i; j++)
//         {
//             cout << j << " ";
//         }
//         int ele = 2 * (i - 1);
//         for (int j = 1; j <= i - 1; j++)
//         {
//             cout << ele-- << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Q8
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; ++i)
//     {
//         int k = 0;
//         for (int j = 0; j < n * 2 - 1; ++j)
//         {

//             if (j < n - i - 1)
//             {
//                 cout << "  ";
//             }
//             else if (k < 2 * i + 1)
//             {
//                 if (k == 0 || k == 2 * i || i == n - 1)
//                 {
//                     cout << "* ";
//                 }
//                 else
//                 {
//                     cout << "  ";
//                 }
//                 k++;
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }