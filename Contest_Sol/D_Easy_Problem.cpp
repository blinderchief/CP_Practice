// /**
//  * writer: blinderchief
//  */
// #include <bits/stdc++.h>
// using namespace std;
 
// #define ll long long
 
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
    
//     // We use long long for the cost values.
//     ll cost;
//     // The DP variables correspond to the minimal cost needed 
//     // to avoid forming the subsequence "hard" when processing characters:
//     // h -> cost for the state before 'h' (i.e. for the letter 'h'),
//     // a -> state after an 'h' has been kept (for letter 'a'),
//     // r -> state after "ha" has been kept (for letter 'r'),
//     // d -> state after "har" has been kept (for letter 'd').
//     // According to the DP recurrence:
//     //   - When an 'h' is encountered, you must remove it (adding its cost)
//     //     if you want to stay in the state with no 'h'.
//     //   - When an 'a' is encountered, you can either remove it (adding its cost)
//     //     or “accept” it (transition from state h to state a) at no extra cost.
//     //   - And similarly for 'r' and 'd'.
//     ll h = 0, a = 0, r = 0, d = 0;
    
//     for (int i = 0; i < n; i++){
//         cin >> cost;
//         if(s[i]=='h'){
//             // If we keep this 'h' then we would move to the next state,
//             // but here we choose to remove it, so we add its cost.
//             h += cost;
//         }
//         else if(s[i]=='a'){
//             // Two choices:
//             // 1. Remove this 'a' (remain in state 'a'): cost becomes a + cost.
//             // 2. Keep this 'a' (transition from state h): cost becomes h.
//             a = min(a + cost, h);
//         }
//         else if(s[i]=='r'){
//             r = min(r + cost, a);
//         }
//         else if(s[i]=='d'){
//             d = min(d + cost, r);
//         }
//         // Any character not in "hard" is ignored.
//     }
    
//     cout << d << "\n";
//     return 0;
// }


