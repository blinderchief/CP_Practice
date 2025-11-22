#include<bits/stdc++.h>
using namespace std;
#define int long long

// Problem Statement
/*
    
*/
 
// Small Observatins
/*
    Finally..
        max will remain..

        u can add an edge from bigger element to smaller..

    if all are max.
        u need (n - 1) * max

    
    if u look at minimums..
        between 2 bigger values..

        all of them must be removed using either of the edge..
        which ever is smaller...

        first !!!

        look at minimum..

        any minimum segment

            they cost min * l - 1 + adj thing..
        
            find minimum ..
                check its both sides..
                remove it with smaller one..

                This works !! 


                maintain a set..
                    of idx
                
                also maintain <val, idx>

                so, get min idx..
                now check its before and after element add that to cost..




   3 1 1 2
*/
 
 
 
/*

*/
 
 
// Claims on algo 
/*  
    
 
*/


void solve(){
    int n; cin >> n;
    int a[n];
    set<int> S;
    set<pair<int, int>> Vals;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a[i] = x;
        Vals.insert({x, i});
        S.insert(i);
    }

    int ans = 0;
    while (S.size() > 1){
        auto f = Vals.begin();
        int val = (*f).first, idx = (*f).second;
        Vals.erase(f);
        auto g = S.lower_bound(idx);
        int l, r;
        if (g != S.begin()){
            g--;
            l = *g;
        }
        else{
            l = *(--S.end());
        }

        g = S.upper_bound(idx);
        if (g != S.end()){
            r = *g;
        }
        else{
            r = *(S.begin());
        }

        ans += min(a[l], a[r]);
        S.erase(idx);
    }

    cout << ans << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t; cin >> t;
    while (t--) solve();
}
 
// Golden Rules
/*
    Solutions are simple.
 
    Proofs are simple.
 
    Implementations are simple.
*/
