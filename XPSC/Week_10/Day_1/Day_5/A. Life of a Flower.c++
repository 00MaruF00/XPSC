#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , one = 0 , zero = 0 , ans = 1;
    cin >> sz;
    int ar[sz];
    for(int i = 0 ; i < sz; i++) cin >> ar[i];
    for(int i = 0 ; i < sz ; i++){
        if(ar[i])one++ , zero = 0;
        else zero++ , one = 0;
        if(zero == 2){
            cout << -1 <<"\n";
            return;
        }
        else if(one >= 2) ans += 5;
        else if(one)ans++;
    }
    cout << ans <<"\n";
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