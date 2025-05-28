#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (k - tmp < tmp)
            sum += k - tmp;
        else
            sum += tmp;
    }
    cout << 2 * sum << endl;
}