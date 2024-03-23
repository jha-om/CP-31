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
    ll n, k;
    cin >> n >> k;
    bool ans = false;
    for (int y = 0; y <= 1;y++) {
        if((n - k*y) >= 0 && (n - k*y) % 2 == 0) {
            ans = true;
            cout << "YES" << nline;
            break;
        }
    }
    if(!ans) {
        cout << "NO" << nline;
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