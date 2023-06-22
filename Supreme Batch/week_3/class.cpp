#include <bits/stdc++.h>
using namespace std;

// Q1: Find unique elements in an array
// int findUnique(vector<int> arr)
// {
//     int ans = 0;
//     // ans = 0 because 0^0 is 0 and 0^1 is 1 that's why we initialized it as 0
//     int size = arr.size();
//     for (int i = 0; i < size; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int uniqueElement = findUnique(arr);
//     cout << "Unique element is: " << uniqueElement;
// }

// Q2: Merge the elements of two array/vector
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int brr[] = {6, 7, 8};
//     vector<int> ans;
//     int sizea = 5, sizeb = 3;
//     for (int i = 0; i < sizea; i++)
//     {
//         ans.push_back(arr[i]);
//     }
//     for (int i = 0; i < sizeb; i++)
//     {
//         ans.push_back(brr[i]);
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
// }

// Q3: Intersection of two arrays
// int main()
// {
//     vector<int> arr{1, 3, 3, 4, 6, 8};
//     vector<int> brr{3, 3, 6, 8};
//     vector<int> ans;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int element = arr[i];
//         for (int j = 0; j < brr.size(); j++)
//         {
//             if (element == brr[j])
//             {

//                 ans.push_back(arr[i]);
//                 // mark to remove duplicates - replace the element with a 'negative' number of 'break' the loop.
//                 brr[j] = INT_MIN;
//             }
//         }
//     }
//     // for (int k = 0; k < ans.size(); k++)
//     // {
//     //     cout << ans[k] << " ";
//     // }
//     for (auto value : ans)
//     {
//         cout << value << " ";
//     }
// }

// Q4: Union of two arrays
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    int sizea = 6;
    vector<int> brr{4, 5, 6, 7, 8, 9};
    int sizeb = 6;
    vector<int> ans;
    for (int i = 0; i < sizea; i++)
    {
        // abcd
    }
}