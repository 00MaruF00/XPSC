#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n , one = 0;
    string s;
    cin >> n >> s;
    bool ok=true;
    if(s[0] == '1')one++;
    for(int i = 1 ; i < n ; i++){
        if(s[i] == '1')one++;
        if(s[i] < s[i - 1]){
            ok= false;
        }
    }
    if(ok) cout << "0\n";
    else{
        cout << 1<<"\n";
        vector<int>v;
        for(int i = 0 ; i < n ; i++){
            if(i <= n - one - 1 && s[i] == '1')v.push_back(i+1);
            else if(i > n - one - 1 && s[i] == '0')v.push_back(i + 1);
        }
        sort(v.begin() , v.end());
        cout << v.size() <<" ";
        for(int iter : v)cout << iter <<" ";
        cout << "\n";
    }
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