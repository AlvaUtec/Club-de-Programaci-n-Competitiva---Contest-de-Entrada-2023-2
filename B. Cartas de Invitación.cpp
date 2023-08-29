/*
Original statement:
https://codeforces.com/contest/1850/problem/E
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

void solve(){
    ll n,c;
    cin>>n>>c;
    ll y=0,x=0;
    rep(i,0,n){
        ll temp;
        cin>>temp;
        x+=temp*temp;
        y+=temp;
    }
    ll z = (c-x)/(4*n);
    y /= n;
    ll ans = sqrt(z+(y*y)/4)-y/2;
    cout<<ans<<endl;
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