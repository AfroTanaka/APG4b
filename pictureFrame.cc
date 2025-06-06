#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            cin >> a[i][j];
    }
    int outer_h = h + 2;
    int outer_w = w + 2;
    for (int i = 0; i < outer_h; i++)
    {
        for (int j = 0; j < outer_w; j++)
        {
            if ((1 <= i && i <= h) && (1 <= j && j <= w))
                cout << a[i - 1][j - 1];
            else
                cout << "#";
        }
        cout << endl;
    }
}