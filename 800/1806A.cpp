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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if(((a-b) >= (c-d)) && (d>=b)){
        cout << ((d - b) + (d - b + a) - c) << nline;
    }
    else {
        cout << "-1" << nline;
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