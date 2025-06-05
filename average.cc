#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> scores(n);
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    int avg = 0;
    for (int i = 0; i < n; i++)
        avg += scores[i];
    avg /= n;
    for (int i = 0; i < n; i++)
    {
        cout << abs(avg - scores[i]) << endl;
    }
}