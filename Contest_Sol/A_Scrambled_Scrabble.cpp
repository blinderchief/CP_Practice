// // /**
// //  * writer:blinderchief 
// // **/
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int 
// // #define f(i,a,n) for(int i =a;i<n;i++)
// // #define vll vector<ll>
// // #define vi vector<int>
// // #define pb push_back
// // #define po pop_back
// // #define me(a, x) memset(a, x, sizeof(a))
// // #define all(v) v.begin(),v.end()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(all(v))
// // int main() {
// // ios_base::sync_with_stdio(false);
// // cin.tie(0);
// // string s; cin>>s;
// //  int c=0,v=0,y=0,n=0,g=0;
// //     for(auto x:s)
// //     {
// //         if(x=='N')
// //             n++;
// //         else if(x=='G')
// //             g++;
// //         else if(x=='Y')
// //             y++;
// //         else if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
// //             v++;
// //         else  
// //             c++;
// //     }
// //     int mx=0;
// //     for(int i=0; i<=min(n,g); i++)
// //     {
// //         for(int j=0; j<=y; j++) 
// //         {
// //             int c1=c+n+g-i+j,v1=v+y-j;
// //             if(2*min(c1/2,v1)>=i)
// //                 mx=max(mx,3*min(c1/2,v1)+i);
// //         }
// //     }
// //     cout<<mx;

// // return 0;
// // }



// /**
//  * writer:blinderchief 
// **/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// string s;cin>>s;
// ll n= s.size();
// int cnty=0,cntv=0,cntc=0,cntng=0;
// for(int i =0;i<n;i++){
// if(s[i]=='Y') cnty++;
// else if(i<n-1 && s[i]=='N' &&s[i+1]=='G') cntng++;
// else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') cntv++;
// else cntc++;
// }
// int ckk = (cntv*2)+1;
// int see =  ckk-cntv;
// if(cntng==0 && cnty==0  && cntc!=0 && cntv!=0 && cntc>cntv){
//         cout<<ckk;
// }
// else if(cntv==0 && cntng==0){
//     if(cnty==0){
//         cout<<0;
//     }
//     else{
//         int cal = cntc-(cnty*2 +1);
//         if(cal>=0) cout<<cal+cnty;
//         else cout<<cnty;
//     }
// }
// else if(cntc>=see){
//     int ck =cntc-see+cntng;
//     int cnttempy=0;
//     while(true){
//         if(ck<2 || cnty<1){
//             break;
//         }
//          ck-=2;
//          cnty--;
//          cnttempy+=3;   
//     }
//         cnty=cnty+ck;
//         int cal = (cnty/3);
//         cnttempy+=cal*3;
//     cout<<ckk+cnttempy+cntng;
// }
// else{
//     int cnttemp =0;
//     cntc+=(cntng);
//     if(cntc>=see){
//         if(cnty<=cntc*2){
//         cnttemp+= (cnty*3);  
//         }
//         else{
//         int cal=cnty-2*cntc;
//         cnttemp+=cal*3;
//         }
//         cout<<ckk+cnttemp+cntng+1;
//     }
//     else{
//        cntc+=cnty;
//         if(cntc>=see){
//         cout<<ckk;
//        }
//        else if(cntc<see){
//         if(cntc<2){
//             cout<<0;
//         }else{
//         cntc+=(cntc-1);
//         cout<<cntc;

//         }
//        }
//     }
// }

// return 0;
// }



/**
 * writer:blinderchief 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
string s;cin>>s;
    int v=0,c=0,n=0,g=0,y=0;
    for(auto ch : s){
        if(ch=='N')n++;
        else if(ch=='G')g++;
        else if(ch=='Y')y++;
        else if(ch=='A'||ch=='E' || ch=='I' || ch=='O' || ch=='U')v++;
        else c++;
    }
    int ans=0;
    for(int i=0;i<=min(n,g);i++){
        int ng=i,vv=v,nn=n-ng,gg=g-ng,yy=y,cc=c+nn+gg;
        int x=min(ng/2,vv);
        ng-=(2*x);vv-=x;
        int val=(5*x);
        x=min(ng/2,yy);
        ng-=(2*x);yy-=x;
        val+=(5*x);
        if(ng%2){
            if(cc){
                if(vv){
                    vv--,cc--;
                    val+=4;
                }else if(yy){
                    vv--,yy--;
                    val+=4;
                }
            }else if(yy>1){
                val+=4;yy-=2;
            }
        }
        x=min(cc/2,vv);
        cc-=(2*x);vv-=x;
        val+=3*x;
        x=min(cc/2,yy);
        cc-=(2*x);yy-=x;
        val+=3*x;
        x=min(yy/2,vv);
        val+=3*x;
        yy-=(2*x);vv-=x;
        x=yy/3;
        val+=3*x;
        ans=max(val,ans);
    }
    cout<<ans;
return 0;
}
