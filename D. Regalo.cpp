/*
Original statement:
https://codeforces.com/contest/676/problem/C
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
    ll n,k;
    string s;
    cin>>n>>k>>s;
    vector<ll> pa(n+1,0),pb(n+1,0);
    rep(i,0,n){
        pa[i+1] = pa[i];
        pb[i+1] = pb[i];
        if(s[i]=='a')
            pa[i+1]++;
        else
            pb[i+1]++;
    }

    ll l=0,r=n,mid,ans=0;
    while(l<=r){
        mid = l+(r-l)/2;
        bool flag = false;
        rep(i,0,n-mid+1){
            if(pa[i+mid]-pa[i]<=k || pb[i+mid]-pb[i]<=k){
                flag = true;
                break;
            }
        }
        if(flag){
            ans = mid;
            l = mid +1;
        }
        else
            r = mid-1;
    }

    cout<<ans<<endl;

}

int main(){
    cpu();
    int t;
    //cin >> t;
    t=1;
    while(t--)
        solve();
    return 0;
}