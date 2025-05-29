#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = s[0] - '0';
    for (int i = 1; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (s[i - 1] == '+')
                sum += s[i] - '0';
            else
                sum -= s[i] - '0';
        }
    }
    cout << sum << endl;
}