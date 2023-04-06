#include <bits/stdc++.h>
using namespace std;

// Globally hash can store 10 to the power 7 elements
int hashh[10000000] = {0};
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // Locally hash can store 10 to the power 6 elements
//     // int hashh[1000000] = {0};
//     // precompute
//     for (int i = 0; i < n; i++)
//     {
//         hashh[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int number;
//         cin >> number;
//         cout << hashh[number] << endl;
//     }
// }

// int main()
// {
//     string s;
//     cin >> s;
//     int hashhh[256] = {0};
//     // precompute
//     for (int i = 0; i < s.size(); i++)
//     {
//         hashhh[s[i]]++;
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         char c;
//         cin >> c;
//         cout << hashhh[c] << endl;
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // precompute
//     unordered_map<int, int> mpp;// most of the time - use unordered_map
//     //Time complexity of unordered_map is O(1),
//     //Time complexity of map is O(N)
//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }

//     //  iterate in the map
//     for (auto it : mpp)
//     {
//         cout << it.first << "->" << it.second << endl;
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int number;
//         cin >> number;
//         // fetch
//         cout << mpp[number] << endl;
//     }
//     return 0;
// }

// Question: Find the highest and lowest frequency element in the array
int main()
{
    int n, highest = INT_MIN, lowest = INT_MAX, h_Ele, l_Ele;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // precompute
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second >= highest)
        {
            highest = it.second;
            h_Ele = it.first;
        }
        if (it.second <= lowest)
        {
            lowest = it.second;
            l_Ele = it.first;
        }
    }
    cout << h_Ele << " and " << l_Ele << endl;
    return 0;
}