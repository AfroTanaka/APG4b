#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    while (1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2)
            {
                cout << sum << endl;
                return 0;
            }
            else
                a[i] /= 2;
        }
        sum++;
    }
}