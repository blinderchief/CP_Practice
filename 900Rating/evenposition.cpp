#include <bits/stdc++.h>

using namespace std;
using li = long long;
using ld = long double;


int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector <int> v;

        li ans = 0;

        for(int i = n - 1; i >= 0; i--)
        {
            if(s[i] == ')')
                v.push_back(i);
            else if(s[i] == '(')
            {
                ans += v.back() - i;
                v.pop_back();
            }
            else
            {
                if(v.empty() || v.size() == 1 && i > 0 && s[i - 1] == '(')
                    v.push_back(i);
                else
                {
                    ans += v.back() - i;
                    v.pop_back();
                }
            }
        }

        cout << ans << "\n";
    }
}
