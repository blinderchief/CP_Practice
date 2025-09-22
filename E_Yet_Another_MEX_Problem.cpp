/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
/*
#define LOCAL
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) "india"
#endif
*/
#define ll long long
#define ull unsigned ll
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb emplace_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) (v).begin(), (v).end()
#define rall(x) (x).rbegin(), (x).rend()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define sz(x) (int)(x).size()
#define inf 0x3f3f3f3f
const int mod = (int)(1e9 + 7);
//Small observations-Think,read Problem again
/*
*/
class SegmentTree{
    public:
    
    #define INF -1e9
    vector<int> t;
    vector<int> lazy;
    int n;
 
    SegmentTree(vector<int> a){
        n = a.size();
        t.resize(4 * n, INF);
        lazy.resize(4 * n, 0);
        build(a, 1, 0, n - 1);
    }
 
    int merge(int a, int b){
        return max(a, b);
    }
 
    void build(vector<int> &a, int v, int tl, int tr) {
        if (tl == tr) {
            t[v] = a[tl];
            lazy[v] = 0;
        } else {
            int tm = (tl + tr) / 2;
            build(a, v * 2, tl, tm);
            build(a, v * 2 + 1, tm + 1, tr);
            t[v] = merge(t[v * 2], t[v * 2 + 1]);
            lazy[v] = 0;
        }
    }
 
    void push(int v) {
        t[v * 2] += lazy[v];
        lazy[v * 2] += lazy[v];
        t[v * 2 + 1] += lazy[v];
        lazy[v * 2 + 1] += lazy[v];
        lazy[v] = 0;
    }
 
    void update(int v, int tl, int tr, int l, int r, int addend) {
        if (l > r) 
            return;
        if (l == tl && tr == r) {
            t[v] += addend;
            lazy[v] += addend;
        } else {
            push(v);
            int tm = (tl + tr) / 2;
            update(v * 2, tl, tm, l, min(r, tm), addend);
            update(v * 2+1, tm + 1, tr, max(l, tm + 1), r, addend);
            t[v] = merge(t[v * 2], t[v * 2 + 1]);
        }
    }
 
    int query(int v, int tl, int tr, int l, int r) {
        if (l > r)
            return 0;
        if (l == tl && tr == r)
            return t[v];
        push(v);
        int tm = (tl + tr) / 2;
        return merge(query(v * 2, tl, tm, l, min(r, tm)), 
                query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
    }
 
    SegmentTree(int n){
        this->n = n;
        t.resize(4 * n, 0);
        lazy.resize(4 * n, 0);
    }
 
    void RangeUpdate(int l, int r, int val){
        update(1, 0, n - 1, l, r, val);
    }
 
    int RangeQuery(int l, int r){
        return query(1, 0, n - 1, l, r);
    }
};
 
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
     int n; cin>>n;
     SegmentTree st(n+1);
     for(int i=0;i<n;i++){
      int x;cin>>x;
      // for x< val we should do ++
      st.RangeUpdate(0,x-1,1);
      int posval = st.RangeQuery(x,x);// if x is not zero then we made it  
      st.RangeUpdate(x,x,-posval); 
      cout<<st.RangeQuery(0,n)<<' ';
     }   
     cout<<'\n';

    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}