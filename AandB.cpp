// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//  int t; cin>>t;
//  while(t--){
//      int  x1,y1,z1,x2,y2,z2,k; cin>>x1>>y1>>z1>>x2>>y2>>z2;
//      int diffx = abs(x1-x2);
//      int diffy = abs(y1-y2);
//      int diffz = abs(z2-z1);
//     array<int,3> chk{diffx,diffy,diffz};
//    sort(chk.begin(),chk.end());
//    if((chk[0]+chk[1]+1)*k>=chk[2]){
//        cout<<chk[0]+chk[1]+chk[2]<<'\n';
//    }
//    else{
//        int  d =chk[2]-(chk[0]+chk[1]+1)*k;
//      if(!(d/k)) d=d/k;
//      else d=(d/k)+1;
//      cout<<chk[0]+chk[1]+chk[2]+d+d%2<<'\n';
//    }
//  }

// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll x1, y1, z1, x2, y2, z2, k;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> k;
    ll diffx = abs(x1 - x2);
    ll diffy = abs(y1 - y2);
    ll diffz = abs(z1 - z2);
    array<ll, 3> chk{diffx, diffy, diffz};
    sort(chk.begin(), chk.end());
    if ((ll)((chk[0] + chk[1]) * k) >= chk[2])
    {
      cout << (ll)(chk[0] + chk[1] + chk[2]) << '\n';
    }
    else
    {
      ll d = chk[2] - (chk[0] + chk[1]) * k;
      d = d / k - 1;
      cout << (ll)(chk[0] + chk[1] + chk[2] + d + d % 2) << '\n';
    }
  }
  return 0;
}
