#include<bits/stdc++.h>
using namespace std;

struct MyStack
{
    int *arr;
    int cap;
    int top;
    MyStack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    string push(int x)
    {
        if(top == cap-1)
        {
            return ("overflow");
        }
        else{
            top++;
            arr[top] = x;
        }
        
    }

    int pop()
    {
        if(top == -1)
        {
            return INT_MAX;
        }
        else{
            int res = arr[top];
            top--;
            return res;
        }
    }

    int peek()
    {   if(top == -1)
        {
            return INT_MIN;
        }
        else{
        return arr[top];
        }
    }

    int size()
    {
        return (top + 1);
    }

    bool isempty()
    {
        return (top == -1);
    }

};

int main()
{
    MyStack s(5);
    s.push(7);
    s.push(6);
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isempty() << endl;

}