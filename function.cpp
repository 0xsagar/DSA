#include <bits/stdc++.h>
using namespace std;

// void sum(int num1, int num2)
// {
//     int num3 = num1 + num2;
//     cout << num3;
// }

// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     sum(num1, num2);
//     // cout << res;
// }

// int maxx(int num1, int num2)
// {
//     if (num1 >= num2)
//     {
//         return num1;
//     }
//     return num2;
// }

// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int maximum = maxx(num1, num2);
//     cout << maximum;
//     return 0;
// }

// // Pass by value
// void doSomething(int num)
// {
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// int main()
// {
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;
//     return 0;
// }

// // Pass by reference
// void doSomething(int &num)
// {
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// int main()
// {
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;
//     return 0;
// }

// Pass by reference Array
// void doSomething(int arr[], int n)
// {
//     arr[0] += 100;
//     cout << "Value inside function: " << arr[0] << endl;
// }

// int main()
// {
//     int n = 5;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     doSomething(arr, n);
//     cout << "Value inside int main: " << arr[0] << endl;
//     return 0;
// }