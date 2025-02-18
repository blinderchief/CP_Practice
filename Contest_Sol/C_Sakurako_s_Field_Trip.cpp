// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//   int n; cin >> n;
    
//     vector <int> a(n);
//     for (auto &x : a) cin >> x;
    
//     vector<vector<int>> b(n);
//     for (int i = 0; i < n; i++){
//         int x = min(i, n - 1 - i);
//         b[x].push_back(a[i]);
//     }
    
//     int ans = 0;
    
//     if (n % 2 == 1){
//         int v = n / 2;
//         b[v].push_back(a[v]);
//     } else {
//         int v = (n - 1) / 2;
//         if (b[v][0] == b[v][1]) ans++;
//     }
    
    
//     for (int i = 1; i <= ((n - 1) / 2); i++){
//         int mx = INT_MAX;
//         for (int j = 0; j < 2; j++){
//             reverse(b[i].begin(), b[i].end());   
//             int v = 0;
//             v += b[i][0] == b[i - 1][0];
//             v += b[i][1] == b[i - 1][1];
            
//             mx = min(mx, v);
//         }
//         ans += mx;
//     }
    
//     cout << ans << "\n";
// }
// return 0;
// }

