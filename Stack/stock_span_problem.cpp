// O(n)
#include<bits/stdc++.h>
using namespace std;

void span(int price[], int n, int s[])
{
    stack<int> st;
    st.push(0);

    s[0] = 1; // Span value of first element is always 1

    for(int i = 1; i < n; i++)
    // Pop elements from stack while stack is not empty and top of stack is smaller than  price[i]
    {
        while(!st.empty() && price[st.top()] <= price[i])
            st.pop();
        s[i] = (st.empty()) ? (i + 1) : (i - st.top());

        st.push(i);
    }

    for(int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n; // size of array
    int price[n];
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    int s[n];
    span(price, n, s);

}

// // without using stack

// #include <iostream>
// #include <stack>
// using namespace std;
 
// // An efficient method to calculate stock span values
// // implementing the same idea without using stack
// void calculateSpan(int A[], int n, int ans[])
// {
//     // Span value of first element is always 1
//     ans[0] = 1;
 
//     // Calculate span values for rest of the elements
//     for (int i = 1; i < n; i++) {
//         int counter = 1;
//         while ((i - counter) >= 0 && A[i] >= A[i - counter]) {
//             counter += ans[i - counter];
//         }
//         ans[i] = counter;
//     }
// }
 
// // A utility function to print elements of array
// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }
 
// // Driver program to test above function
// int main()
// {
//     int price[] = { 10, 4, 5, 90, 120, 80 };
//     int n = sizeof(price) / sizeof(price[0]);
//     int S[n];
 
//     // Fill the span values in array S[]
//     calculateSpan(price, n, S);
 
//     // print the calculated span values
//     printArray(S, n);
 
//     return 0;
// }


// // O(n2)

// #include<bits/stdc++.h>
// using namespace std;

// void span(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int span = 1;
//         for(int j = i-1; j >= 0 && arr[j] <= arr[i]; j--)
//         {
//             span++;
//         }
//         cout << span << endl;
//     }
// }

// int main()
// {
//     int arr[6] = {18, 12, 13, 14, 11, 16};
//     span(arr, 6);
// }