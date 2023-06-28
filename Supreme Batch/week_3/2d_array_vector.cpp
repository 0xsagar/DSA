#include <bits/stdc++.h>
using namespace std;

int main()
{
    //initialize
    vector<vector<int>> arr;

    vector<int> a{1, 2, 3};
    vector<int> b{4, 5, 6, 7, 8};
    vector<int> c{9, 10};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // how to find no. of rows: arr.size()
    // how to find no. of columns: arr[0].size() for same no. of columns
    // how to find no. of columns: arr[i].size() for diff. no. of columns
}