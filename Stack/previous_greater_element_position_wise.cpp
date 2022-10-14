
#include<bits/stdc++.h>
using namespace std;

void prev_grt(int arr[], int n)
{
// O(n) time complexity - efficient solution

    stack<int> st;
    st.push(arr[0]);

    cout << -1 << endl;

    for(int i = 1; i < n; i++)
    {
        while(st.empty() == false && st.top() <= arr[i])
            st.pop();
        int pg = (st.empty()) ? -1 : st.top();
        cout << pg << endl;
        st.push(arr[i]);
    }

// O(n square) time complexity - naive approach 

    // for(int i = 0; i < n; i++)
    // {
    //     int j;
    //     for(j = i - 1; j >= 0; j--)
    //     {
    //         if (arr[j] > arr[i])
    //         {
    //             cout << arr[j] << " ";
    //             break;
    //         }
    //     }
    //     if (j == -1)
    //     {
    //         cout << -1 << " ";
    //     }
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
    prev_grt(arr, n);

}



