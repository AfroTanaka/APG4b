#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> grid(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            cin >> grid[i][j];
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            int sum = 0;
            if (grid[i][j] == '#')
            {
                cout << '#';
                continue;
            }
            if ((0 <= i - 1 && i - 1 < h) && (0 <= j - 1 && j - 1 < w))
            {
                if (grid[i - 1][j - 1] == '#')
                    sum++;
            }
            if ((0 <= i - 1 && i - 1 < h) && (0 <= j && j < w))
            {
                if (grid[i - 1][j] == '#')
                    sum++;
            }
            if ((0 <= i - 1 && i - 1 < h) && (0 <= j + 1 && j + 1 < w))
            {
                if (grid[i - 1][j + 1] == '#')
                    sum++;
            }
            if ((0 <= i && i < h) && (0 <= j - 1 && j - 1 < w))
            {
                if (grid[i][j - 1] == '#')
                    sum++;
            }
            if ((0 <= i && i < h) && (0 <= j + 1 && j + 1 < w))
            {
                if (grid[i][j + 1] == '#')
                    sum++;
            }
            if ((0 <= i + 1 && i + 1 < h) && (0 <= j - 1 && j - 1 < w))
            {
                if (grid[i + 1][j - 1] == '#')
                    sum++;
            }
            if ((0 <= i + 1 && i + 1 < h) && (0 <= j && j < w))
            {
                if (grid[i + 1][j] == '#')
                    sum++;
            }
            if ((0 <= i + 1 && i + 1 < h) && (0 <= j + 1 && j + 1 < w))
            {
                if (grid[i + 1][j + 1] == '#')
                    sum++;
            }
            cout << sum;
        }
        cout << endl;
    }
}