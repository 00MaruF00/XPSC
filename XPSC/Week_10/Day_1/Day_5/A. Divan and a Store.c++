#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a , l , r , e , counter = 0;
    cin >> a >> l >> r >> e;
    int ar[a];
    for(int i = 0 ; i < a ; i++) cin >> ar[i];
    sort(ar , ar + a);
    for(int i = 0 ; i < a ; i++)
        if(ar[i] >= l && ar[i] <= r && e >= ar[i]) e -= ar[i] , counter++;
    cout << counter <<"\n";
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