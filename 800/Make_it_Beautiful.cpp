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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if(a[0] == a[n-1]){
        cout << "NO" << nline;
        return;
    }
    if(a[0] != a[n-1]){
        swap(a[1], a[n-1]);
    }
    cout << "YES" << nline;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << nline;
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