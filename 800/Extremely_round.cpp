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
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= 9; i++)
    {
        int key = i;
        while(key <= n) {
            cnt++;
            key *= 10;
        }
    }
    cout << cnt << nline;
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