#include<bits/stdc++.h>
using namespace std;

struct twostacks{
    int *arr, cap, top1, top2;
    twostacks(int n)
    {
        cap = n;
        top1 = -1;
        top2 = cap;
        arr = new int[n];
    }


void push1(int x)
{
    if (top1 < top2 -1)
    {
        top1++;
        arr[top1] = x;
    }
}

void push2(int x)
{
    if(top1 < top2 - 1)
    {
        top2--;
        arr[top2] = x;
    }
}
int pop1()
{
    if(top1 >= 0)
    {
        int x = arr[top1];
        top1--;
        return x;
    }
    else
    {
        exit(1);
    }

}

int pop2()
{
    if (top2 < cap )
    {
        int x = arr[top2];
        top2++;
        return x;
    }
    else{
        exit(1);
    }
}
};

int main()
{
    twostacks s(5);
    s.push1(5);
    s.push2(10);
    s.push2(15);
    s.push1(11);
    s.push2(7);

    cout << s.pop1() << endl;
    s.push2(40);
    cout << s.pop2();

    return 0;
}