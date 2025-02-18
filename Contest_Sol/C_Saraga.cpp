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
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// bool check(const std::string& s1, const std::string& s2) {
//     unordered_set<char> charSet;

//     for (char c : s1) {
//         charSet.insert(c);
//     }

//     for (char c : s2) {
//         if (charSet.find(c) != charSet.end()) {
//             return true;
//         }
//     }
//     return false; 
// }

// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
//   string s,r; cin>>s>>r;
//   if(s==r) cout<<s;
//   else{
//     int i =0,j=r.size()-1;
//   }
// return 0;
// }


// #include <iostream>
// #include <unordered_set>
// #include <string>

// bool hasCommonSubstring(const std::string& s1, const std::string& s2) {
//     std::unordered_set<char> charSet;

//     for (char c : s1) {
//         charSet.insert(c);
//     }

//     for (char c : s2) {
//         if (charSet.find(c) != charSet.end()) {
//             return true; // Found a common character
//         }
//     }

//     return false; // No common substring
// }

// int main() {
//     std::string s1, s2;
//     std::cin >> s1;
//     std::cin >> s2;

//     if (hasCommonSubstring(s1, s2)) {
//         std::cout << "Yes, the two strings have a common substring.\n";
//     } else {
//         std::cout << "No, the two strings do not have any common substring.\n";
//     }

//     return 0;
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
#define pb emplace_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);

    string b, c, s = "";
	cin >> b >> c;
	map<char, int> m;
	for (int i = 1; i < b.length(); i++) {
		if (m.count(b[i]) == 0)
			m[b[i]] = i;
	}
	int y = INT_MAX;
	for (int j = 1; j < c.length(); j++) {
		char x = c[c.length() - j - 1];
		if (m.count(x) != 0 && j + m[x] < y) {
			s = b.substr(0, m[x] + 1) + c.substr(c.length() - j);
			y = j + m[x];
		}
	}
	if (s == "")
		cout << -1;
	else
		cout << s;

return 0;
}
