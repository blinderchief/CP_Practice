/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define INF (int)1e18
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
         ll n;
        cin >> n;
        vector<ll> a(n);
        ll in = -1;
        vector<ll> b(n+1,0);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 1 && a[i] != -1)
            {
                in = i;
            }
            b[i+1]=b[i]+a[i];
        }
        ll mins1 = 0, maxs1 = 0;
        ll mie1=0,mae1=0;
        for (ll i = 0; i < (in == -1 ? n : in); i++)
        {
            mie1=min(mie1+a[i],a[i]);
            mins1=min(mins1,mie1);   
            mae1=max(mae1+a[i],a[i]);
            maxs1=max(maxs1,mae1);
        }
        ll mins2 = 0, maxs2 = 0;
        ll mie2=0,mae2=0;
        for (ll i = in+1; i < n; i++)
        {
            mie2=min(mie2+a[i],a[i]);
            mins2=min(mins2,mie2);
            mae2=max(mae2+a[i],a[i]);
            maxs2=max(maxs2,mae2);
        }
        set<ll> s;
        for (ll i = mins1; i <= maxs1; i++)
        {
            s.insert(i);
        }
        for (ll i = mins2; i <= maxs2; i++)
        {
            s.insert(i);
        }
        s.insert(0);

        if (in != -1)
        {
            set<ll> new_s;
            mins1 = 0, maxs1 = 0;
            for(ll i=in-1;i>=0;i--)
            {
                mins1=min(mins1,b[in]-b[i]);
                maxs1=max(maxs1,b[in]-b[i]);
            }
            maxs2=0,mins2=0;
            for(ll i=in+1;i<n;i++)
            {
                maxs2=max(maxs2,b[i+1]-b[in+1]);
                mins2=min(mins2,b[i+1]-b[in+1]);
            }
            ll mi=min(mins1,mins2);
            ll ma=max(maxs1,maxs2);
            mi=min(mi,mins1+mins2);
            ma=max(ma,maxs1+maxs2);
            for(ll i=mi;i<=ma;i++)
            {
                new_s.insert(i);
            }
            for (auto i : new_s)
            {
                s.insert(i + a[in]);
            }
            for (auto i : s)
            {
                s.insert(i);
            }
        }
       
        cout<<s.size()<<endl;
        for (auto i : s)
        {
            cout << i << " ";
        }
        cout <<'\n';
        
        
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// const int N = 2e5 + 5;

// ll T, n, a[N];

// set <ll> S;

// inline void solve() {
// 	cin >> n;
// 	for (int i = 1; i <= n; ++i) {
// 		cin >> a[i];
// 	}
// 	S.clear();
// 	int pos = 1;
// 	for (int i = 1; i <= n; ++i) {
// 		if (abs(a[i]) != 1) {
// 			pos = i;
// 			break;
// 		}
// 	}
// 	ll l1 = 0, r1 = 0, s = 0;
// 	for (int i = 1; i < pos; ++i) {
// 		s = min(0ll, s + a[i]);
// 		l1 = min(l1, s);
// 	}
// 	s = 0;
// 	for (int i = 1; i < pos; ++i) {
// 		s = max(0ll, s + a[i]);
// 		r1 = max(r1, s);
// 	}
// 	s = 0;
// 	ll l2 = 0, r2 = 0;
// 	for (int i = pos + 1; i <= n; ++i) {
// 		s = min(0ll, s + a[i]);
// 		l2 = min(l2, s);
// 	}
// 	s = 0;
// 	for (int i = pos + 1; i <= n; ++i) {
// 		s = max(0ll, s + a[i]);
// 		r2 = max(r2, s);
// 	}
// 	for (ll i = l1; i <= r1; ++i) {
// 		S.insert(i);
// 	}
// 	for (ll i = l2; i <= r2; ++i) {
// 		S.insert(i);
// 	}
// 	l1 = r1 = 0;
// 	s = 0;
// 	for (int i = pos - 1; i; --i) {
// 		s += a[i];
// 		l1 = min(l1, s);
// 		r1 = max(r1, s);
// 	}
// 	l2 = r2 = 0;
// 	s = 0;
// 	for (int i = pos + 1; i <= n; ++i) {
// 		s += a[i];
// 		l2 = min(l2, s);
// 		r2 = max(r2, s);
// 	}
// 	ll p = l1 + l2 + a[pos], q = r1 + r2 + a[pos];
// 	for (ll i = p; i <= q; ++i) {
// 		S.insert(i);
// 	}
// 	cout << S.size() << "\n";
// 	for (auto u: S) {
// 		cout << u << " ";
// 	}
// 	cout << "\n";
// }

// int main() {
// 	#ifdef LOCAL
// 		assert(freopen("test.in", "r", stdin));
// 		assert(freopen("test.out", "w", stdout));
// 	#endif
// 	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
// 	cin >> T;
// 	while (T--) {
// 		solve();
// 	}
// 	return 0;
// }

