#include <bits/stdc++.h>
using namespace std;

// // *****
// // *****
// // *****
// // *****
// // *****
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // *
// // **
// // ***
// // ****
// // *****
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // 1
// // 12
// // 123
// // 1234
// // 12345
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << j + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// // 1
// // 22
// // 333
// // 4444
// // 55555
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << i + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
    return 0;
}