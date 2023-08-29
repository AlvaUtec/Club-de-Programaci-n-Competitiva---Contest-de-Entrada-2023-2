/* 
Original statement:
https://codeforces.com/contest/1857/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
#define cpu() ios::sync_with_stdio(false); cin.tie(nullptr)
 
typedef long long ll;
#define f first
#define s second
#define endll "\n"
 
const ll MAX = 2*1e5+10;
const ll MIN = -1e6 + 10;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve(){
    ll n;
    cin >> n;

    ll sum = 0, ai;
    for (int i = 0; i < n; ++i){
        cin >> ai;
        sum += ai;
    }

    if(sum&1) cout << "NO" << endll;
    else cout << "YES" << endll;
}
 
int main(){
    cpu();
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;  
}