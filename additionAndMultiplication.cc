#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int sum = 1;
    for (int i = 0; i < n; i++)
    {
        if (sum * 2 < sum + k)
            sum *= 2;
        else
            sum += k;
    }
    cout << sum << endl;
}