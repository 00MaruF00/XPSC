#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , temp , ans = 0;
    cin >> sz ;
    int ar[sz];
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    temp = ar[ sz - 1];
    for(int i = sz - 2 ; i>= 0 ; i--)
        if(ar[i] > temp)temp = ar[i] , ans++;
    cout << ans <<'\n';
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