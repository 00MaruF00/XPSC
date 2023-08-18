#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n ;
    vector<int>v1 , v2;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int sz;
        cin >> sz;
        priority_queue<int , vector<int> , greater<int>>pq;
        for(int j = 0 ; j < sz ; j++){
            int a;
            cin >> a;
            pq.push(a);
        }
        v1.push_back(pq.top());
        pq.pop();
        v2.push_back(pq.top());
    }
    ll sum = 0;
    sort(v2.begin() , v2.end());
    for(int i = 1 ; i < v2.size() ; i++) sum += v2[i];
    sum += *min_element(v1.begin() , v1.end());
    cout << sum <<"\n";
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