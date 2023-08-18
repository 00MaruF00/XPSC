#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll a , b;
    cin >> a >> b;
    if(a%2 == 1 && b%2 == 0)cout << "NO\n";
    else cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while(test--)
        solve();
    return 0 ;
}