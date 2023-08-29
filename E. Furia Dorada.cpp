/*
Original statement:
https://codeforces.com/contest/1829/problem/D
*/

#include <bits/stdc++.h>
using namespace std;

#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rev(i,a,b) for(ll i=a;i>b;i--)
#define endl "\n"

const ll mod = 1e9+7;
const ll inf = INT64_MAX;
const ll ninf = INT64_MIN;
const int MAXN = 1e6;

bool dfs(ll n, ll m){
    if (n==m)
        return true;
    
    if (n%3==0)
        return dfs(n/3,m) or dfs((n/3)*2,m);
    
    return false;
}

void solve(){
    ll n,m;
    cin>>n>>m;
    dfs(n,m) ? cout<<"YES\n" : cout<<"NO\n";
}

int main(){
    cpu();
    int t;
    cin >> t;
    //t=1;
    while(t--)
        solve();
    return 0;
}