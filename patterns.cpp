#include <bits/stdc++.h>
using namespace std;

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// *
// * *
// * * *
// * * * *
// * * * * *
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

// * * * * *
// * * * *
// * * *
// * *
// *
void pattern5(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
void pattern6(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

//     *
//    ***
//   *****
//  *******
// *********
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// *********
//  *******
//   *****
//    ***
//     *
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < (2 * n) - (2 * i) - 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;

        // for (int j = i; j < n; j++)
        // {
        //     cout << " ";
        // }
        // for (int k = 1; k < (2 * i); k++)
        // {
        //     cout << "*";
        // }
        // cout << endl;
    }
}

//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
void pattern9(int n)
{
    // just combine the 'for loops' from pattern7 and pattern8
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k < (2 * i); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 0; i--)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < (2 * i); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
void pattern10(int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = n - 1; i > 0; i--)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// 1
// 01
// 101
// 0101
// 10101
void pattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
void pattern12(int n)
{
    // int j = 0, s = 0;
    int space = (2 * (n - 1));
    for (int i = 1; i <= n; i++)
    {
        // for (j = 0; j < i; j++)
        // {
        //     s++;
        //     cout << s;
        // }
        // for (int k = (2 * n) - (2 * j); k > 0; k--)
        // {
        //     cout << " ";
        // }
        // for (j = 0; j < i; j++)
        // {

        //     cout << s;
        //     s--;
        // }
        // cout << endl;

        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
void pattern13(int n)
{
    int s = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << s++ << " ";
        }
        cout << endl;
    }
}

// A
// A B
// A B C
// A B C D
// A B C D E
void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        char s = 65;
        for (int j = 0; j <= i; j++)
        {
            cout << s++ << " ";
        }
        cout << endl;
    }
}

// A B C D E
// A B C D
// A B C
// A B
// A
void pattern15(int n)
{
    for (int i = n; i > 0; i--)
    {
        char s = 65;
        for (int j = 0; j < i; j++)
        {
            cout << s++ << " ";
        }
        cout << endl;
    }
}

// A
// B B
// C C C
// D D D D
// E E E E E
void pattern16(int n)
{
    char s = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << s << " ";
        }
        cout << s++ << endl;
    }
}

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // alphabets
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// E
// D E
// C D E
// B C D E
// A B C D E

// E
// E D
// E D C
// E D C B
// E D C B A
void pattern18(int n)
{
    // Answer for pattern18 from the video
    char ch = 'A' + n - 1;
    for (int i = 0; i < n; i++)
    {
        for (char c = char(ch - i); c <= (ch); c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    // Answer for alphaPattern from the website CodeStudio
    // char ch = 'A' + n - 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (char c = char(ch); c >= (ch - i); c--)
    //     {
    //         cout << c << " ";
    //     }
    //     cout << endl;
    // }
}

// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
void pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        if (i == n - 1)
            continue;
        else
            cout << endl;
    }
    for (int i = n; i >= 0; i--)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // for (int i = 1; i <= 2 * n - 1; i++)
    // {
    //     int breakP = i > n ? 2 * n - i : i;

    //     for (int j = 1; j <= n - breakP + 1; j++)
    //     {
    //         cout << "* ";
    //     }

    //     for (int sp = 1; sp <= 2 * breakP - 2; sp++)
    //     {
    //         cout << "  ";
    //     }

    //     for (int j = 1; j <= n - breakP + 1; j++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }
}

// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
void pattern20(int n)
{
    for (int i = n; i >= 0; i--)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// * * * * *
// *       *
// *       *
// *       *
// * * * * *
void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
void pattern22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right))) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 4;
    pattern22(n);
    return 0;
}