#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll sz  , ans = 0 , c = 1;
    cin >>  sz;
    pair<ll , int> ar[sz];
    for(int i = 0 ; i < sz ; i++){
        ll a;
        cin >> a;
        ar[i]={a , i};
    }
    sort(ar , ar + sz , greater<pair<int , int>>());
    for(int i = 0 ; i < sz ; i++){
        ans += c*ar[i].first*2;
        if(i&1)c++;
    }
    cout
     << ans <<"\n";
    int a[sz];
    c = 1;
    bool ok = true;
    for(int i = 0 ; i < sz ; i++){
        if(ok){
            a[ar[i].second] = c;
            ok = false;
        }
        else {
            a[ar[i].second] = -c;
            ok = true;
        }
        if(i&1)c++;
    }
    cout << 0 <<" ";
    for(int i = 0 ; i < sz ; i++)cout << a[i] <<" ";
    cout << "\n";
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