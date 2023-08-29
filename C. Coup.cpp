/*
Original statement:
https://codeforces.com/contest/1857/problem/D
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
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a[i] -= b;
    }
    
    int x = *max_element(a.begin(), a.end());
    
    vector<int> p;
    for (int i = 0; i < n; i++) 
        if (a[i] == x) 
            p.push_back(i);
        
    cout << p.size() << "\n";
    for (int i = 0; i < p.size(); i++) 
        cout << p[i] + 1 << " \n"[i == p.size() - 1];
    
    
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