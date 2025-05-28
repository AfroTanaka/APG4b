#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        int one_a, two_a, four_a, five_a;
        one_a = i / 10000;
        two_a = i / 1000 % 10;
        four_a = i / 10 % 10;
        five_a = i % 10;
        if (one_a == five_a && two_a == four_a)
            sum++;
    }
    cout << sum << endl;
}