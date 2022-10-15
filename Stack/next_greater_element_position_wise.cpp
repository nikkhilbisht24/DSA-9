
#include <bits/stdc++.h>
using namespace std;

vector<int> next_grt(int arr[], int n)
{
//  O(n) time complexity

    vector<int> v;
    stack<int> s;
    s.push(arr[n - 1]);
    v.push_back(-1);

    for (int i = n - 2; i >= 0; i--)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        int ng = (s.empty()) ? -1 : s.top();

        v.push_back(ng);
        s.push(arr[i]);
    }
    reverse(v.begin(), v.end());

    for (auto e : v)
    {
        cout << e << endl;
    }

// O(n square) time complexity

    // for (int i = 0; i < n; i++)
    // {
    //     int j;
    //     for (j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] > arr[i])
    //         {
    //             cout << arr[j] << " ";
    //             break;
    //         }
    //     }
    //     if (j == n)
    //         cout << -1 << " ";
    // }
}

int main()
{
    int n;
    cin >> n; // size of array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    next_grt(arr, n);
}
