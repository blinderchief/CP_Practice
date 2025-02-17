#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, n) for(int i = 0; i < n; i++)
#define sot(v) sort(v.begin(), v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int d, sumTime;
    cin >> d >> sumTime;

    vector<pair<int, int>> time_ranges(d);
    int minSum = 0, maxSum = 0;

    f(i, d) {
        int minTime, maxTime;
        cin >> minTime >> maxTime;
        time_ranges[i] = {minTime, maxTime};
        minSum += minTime;
        maxSum += maxTime;
    }

    if(sumTime < minSum || sumTime > maxSum) {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> schedule(d);
    int extra_hours = sumTime - minSum;

    f(i, d) {
        schedule[i] = time_ranges[i].first;
    }

    f(i, d) {
        int minTime = time_ranges[i].first;
        int maxTime = time_ranges[i].second;
        int possible_extra = maxTime - minTime;
        int add_hours = min(possible_extra, extra_hours);
        schedule[i] += add_hours;
        extra_hours -= add_hours;
    }

    cout << "YES" << endl;
    f(i, d) {
        cout << schedule[i] << " ";
    }
    cout << endl;

    return 0;
}
