// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
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
//   ll n; cin>>n;
//     vll a(n+2);
//     f(i,1,n+1) cin >> a[i];
//     int ans = a[1];
//     int temp=1;
//     f(i,3,n+1){
//         if (a[i]==1 && a[i]==a[i-1]) temp++;
//         else{
//             ans+=temp/3;
//             temp = 1;
//         }
//     }
//     ans+=temp/3;
//     cout << ans << '\n';

// }
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int aa[n];
        for(int i=0; i<n; i++)
        {
            cin>>aa[i];
        }
        int p=0;
        int sum=0;
        for(int i=0; i<n; )
        {
            if(p==0)
            {
                if(aa[i]==0)
                {
                    if((i+1)<n)
                    {

                        if(aa[i+1]==0)
                        {
                            if((i+2)<n)
                            {
                                if(aa[i+2]==0)
                                {
                                    i++;
                                    p=1;
                                }
                                else
                                {
                                    i=i+2;
                                    p=1;
                                }
                            }
                            else
                            {
                                i=i+2;
                                p=1;
                            }

                        }
                        else
                        {
                            i=i+1;
                            p=1;
                        }
                    }
                    else
                        i++;
                }
                else
                {
                    if((i+1)<n)
                    {
                        if(aa[i+1]==0)
                        {
                            if((i+2)<n)
                            {
                                if(aa[i+2]==0)
                                {
                                    i++;
                                    p=1;
                                    sum++;
                                }
                                else
                                {
                                    i=i+2;
                                    p=1;
                                    sum++;
                                }
                            }
                            else
                            {
                                i=i+2;
                                p=1;
                                sum++;
                            }
                        }
                        else
                        {
                            i++;
                            sum++;
                            p=1;
                        }
                    }
                    else
                    {
                        i++;
                        sum++;
                    }
                }
            }
            else
            {
                if(aa[i]==0)
                {
                    if((i+1)<n)
                    {
                        if(aa[i+1]==1)
                        {
                            i=i+2;
                            p=0;
                        }
                        else
                        {
                            i=i+1;
                            p=0;
                        }
                    }
                    else
                    {
                        i++;
                    }
                }
                else
                {
                    if((i+1)<n)
                    {
                        if(aa[i+1]==1)
                        {
                            i=i+2;
                            p=0;
                        }
                        else
                        {
                            i++;
                            p=0;
                        }
                    }
                    else
                    {
                        i++;
                    }
                }
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}

