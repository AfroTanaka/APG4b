#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, tmp;
    cin >> n;
    tmp = n;
    long long sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << (tmp % sum == 0 ? "Yes" : "No") << endl;
}