#include <bits/stdc++.h>
using namespace std;
vector<string> csop;
map<string, int> point, dif, g;
int n;

bool cmp(string a, string b) {
	return (point[a]>point[b] || (point[a]==point[b] && (dif[a]>dif[b] || (dif[a]==dif[b] && g[a]>g[b]))));
}

int main() {
	cin >> n;
	for (int i=0; i<n; i++) {
		string s;
		cin >> s;
		csop.push_back(s);
	}
	for (int i=1; i<=n*(n-1)/2; i++) {
		string a, b;
		string x, y;
		int gx=0, gy=0;
		cin >> a >> b;
		bool valt=0;
		for (auto p:a) {
			if (p=='-') valt=1;
			else if (!valt) x+=p;
			else y+=p;
		}
		valt=0;
		for (auto p:b) {
			if (p==':') valt=1;
			else if (!valt) gx+=(p-'0');
			else  gy+=(p-'0');
		}

		if (gx>gy) point[x]+=3;
		if (gy>gx) point[y]+=3;
		if (gx==gy) point[x]++, point[y]++;

		dif[x]+=gx-gy;
		dif[y]+=gy-gx;
		g[x]+=gx;
		g[y]+=gy;
	}


	sort(csop.begin(), csop.end(), cmp);
	int f=n/2;
	sort(csop.begin(), csop.begin()+f);

	for (int i=0; i<f; i++) {
		cout << csop[i] << "\n";
	}
}