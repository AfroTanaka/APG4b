#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    for (int i = 1; i <= n; i++)
    {
        int b;
        char op;
        cin >> op >> b;
        if (b == 0 && op == '/')
        {
            cout << "error" << endl;
            break;
        }
        cout << i << ":";
        if (op == '+')
        {
            a += b;
            cout << a << endl;
        }
        else if (op == '-')
        {
            a -= b;
            cout << a << endl;
        }
        else if (op == '*')
        {
            a *= b;
            cout << a << endl;
        }
        else
        {
            a /= b;
            cout << a << endl;
        }
    }
}