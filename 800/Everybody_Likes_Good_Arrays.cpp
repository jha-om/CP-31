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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int even = 0, odd = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i] % 2) && (a[i + 1] % 2))
        {
            odd++;
        }
        else if ((a[i] % 2 == 0) && (a[i + 1] % 2 == 0))
        {
            even++;
        }
    }
    cout << (odd > 0 ? odd : 0) + (even > 0 ? even : 0) << nline;
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