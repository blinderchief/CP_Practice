#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// lazy segtree with range subtract 1 and find minimum + location 

const int N = 2e5 + 69;
pair <int, int> seg[4 * N];
int lazy[4 * N];

void build(int l, int r, int pos){
    seg[pos] = make_pair(INF, l);
    lazy[pos] = 0;
    if (l == r){
        return;
    }
    
    int mid = (l + r) / 2;
    build(l, mid, pos * 2);
    build(mid + 1, r, pos * 2 + 1);
}

void updlz(int l, int r, int pos){
    seg[pos].first -= lazy[pos];
    if (l != r){
        lazy[pos * 2] += lazy[pos];
        lazy[pos * 2 + 1] += lazy[pos];
    }
    
    lazy[pos] = 0;
}

void reset(int l, int r, int pos, int x, int y){
    
    updlz(l, r, pos);
    if (!(l <= x && x <= r)) return;
    if (l == r){
        seg[pos] = make_pair(y, l);
        return;
    }
    
    int mid = (l + r) / 2;
    reset(l, mid, pos * 2, x, y);
    reset(mid + 1, r, pos * 2 + 1, x, y);
    
    seg[pos] = min(seg[pos * 2], seg[pos * 2 + 1]);
}

void upd(int l, int r, int pos, int ql, int qr){
    updlz(l, r, pos);
    
    if (l >= ql && r <= qr){
        lazy[pos] = 1;
        updlz(l, r, pos);
    } else if (l > qr || r < ql){
        return;
    } else {
        int mid = (l + r) / 2;
        upd(l, mid, pos * 2, ql, qr);
        upd(mid + 1, r, pos * 2 + 1, ql, qr);
        seg[pos] = min(seg[pos * 2], seg[pos * 2 + 1]);
    }
}

void Solve() 
{
    // b[i] >= p 
    // b[i - 1] >= p - 1
    // b[i - 2] >= p - 2 
    // if not remove anything, straightforward 
    // check if can make p? 
    // delete or not depending on whether can 
    
    // does i + 1 -> i change much? 
    // some new things do get deleted 
    // but like should be bounded? 
    // yeah you ghet deleted once? 
    
    // so need to evaluate what will be deleted 
    // verge of deletion type shit 
    // its some lazy segtre bull shit
    
    int n, k; cin >> n >> k;
    // int n = 2e5, k = 10;
    
    vector <int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        // a[i] = RNG() % ((int)1e9);
    }
    
    auto compute = [&](int p){
        // for each element look at suffix 
        // 1 -> 2 we go, then each element needs to be larger to stay in 
        // => some get deleted 
        
        vector <int> b(n + 1, -INF);
        
        build(1, n, 1);
        
        int need = p;
        int got = 0;
        
        vector <bool> active(n + 1, false);
        
        for (int i = 1; i <= n; i++){
            if (a[i] >= need){
                
                got++;
                
                // set these points to valid 
                reset(1, n, 1, i, a[i] - need);
                need--;
                
              //  cout << "SET " << i << " " << (a[i] - need) << "\n";
                active[i] = true;
            }
        }
        
        for (int i = 1; i <= n; i++){
            if (active[i]){
                // need larger values now! 
              //  cout << "SUBTRACTING DUE TO " << i << "\n";
                // upd(1, n, 1, i, n);
                while (seg[1].first < 0){
                    int pos = seg[1].second;
                    // cout << "DIED " << pos << "\n";
                    got--;
                    active[pos] = false;
                    // the next elements also need to be larger now? 
                    reset(1, n, 1, pos, INF);
                 //   cout << "POSITION SUB " << pos << "\n";
                    upd(1, n, 1, pos + 1, n);
                }
                
                if (active[i]){
                    b[i] = got;
                    active[i] = false;
                    got--;
                    reset(1, n, 1, i, INF);
                    upd(1, n, 1, 1, n);
                }
            }
        }
     //   cout << "DONE\n";
        
        return b;
    };
    
    int lo = 0, hi = 1e9;
    
    while (lo != hi){
        int p = (lo + hi + 1) / 2;
        
        auto b = compute(p);
        reverse(a.begin() + 1, a.end());
        auto c = compute(p);
        reverse(a.begin() + 1, a.end());
        reverse(c.begin() + 1, c.end());
        
        // for (int i = 1; i <= n; i++){
        //     cout << b[i] << " \n"[i == n];
        // }
        // for (int i = 1; i <= n; i++){
        //     cout << c[i] << " \n"[i == n];
        // }
        
        bool good = false;
        for (int i = 1; i <= n; i++){
            int tot = b[i] + c[i];
            tot--;
            
            if (tot >= n - k){
                good = true;
            }
        }
        
        if (good){
            lo = p;
        } else {
            hi = p - 1;
        }
    }
    
    cout << lo << "\n";
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        //cout << "Case #" << i << ": ";
        Solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}
