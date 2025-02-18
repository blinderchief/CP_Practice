/**
 * writer:blinderchief
 **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    f(i, 0, n)
    {
      f(j, 0, n)
      {
        v[i][j] = 0;
      }
    }
    if(n==1){
      cout<< "1 1\n1 1 1\n";
      continue;
    }
    if(n==2){
      cout << "7 3\n1 1 1 2\n1 2 1 2\n2 1 1 2\n";
      continue;
    }
    int val=n-1;
    while(val>=0){
      for(int i=0;i<n;i++){
        v[val][i]=i+1;
      }
      for(int i=0;i<n;i++){
        v[i][val]=i+1;
      }
      val--;
    }
    ll sum = 0;
    f(i, 0, n)
    {
      f(j, 0, n)
      {
        sum += v[i][j];
      }
    }
    cout << sum << " " << 2*n << '\n';
    val = n-1;
    while (val >= 0)
    {
      cout << "1 " << val+1 << " ";
      for(int i=1;i<=n;i++){
        cout <<i << " ";
      } 
      cout << endl;
      cout << "2 " << val+1 << " ";
      for(int i=1;i<=n;i++){
        cout <<i << " ";
      } 
      cout << endl;
      val--;
    }
    // f(i,0,n){
    //   f(j,0,n){
    //     cout<<v[i][j]<<" ";
    //   }
    //   cout<<'\n';
    // }
  }

  return 0;
}