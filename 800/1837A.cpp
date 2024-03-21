#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define nline "\n"
/*Knowing of running time*/
clock_t startTime;
double getCurrentTime()
{
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

void solve()
{
    int k, x;
    cin >> x >> k;
    if (x % k != 0)
    {
        cout << "1" << nline << x << nline;
    }
    else
    {
        cout << "2" << nline;
        cout << 1 << " " << x - 1 << nline;
    }
}

int main()
{
    startTime = clock();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}