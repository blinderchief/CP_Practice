#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin >> n; 

        int count = 0;
        int tp = n;
        while (tp > 0) {
            tp /= 2;
            count++;
        }
        
        cout << count << endl; 
        
        int first = 2;
        int ap = 1;    

        for (int i = 1; i <= n; i++) {
            if (i == first) {
                first *= 2;
                ap++;
            }
            cout << ap<< " ";
        }
        cout << endl;
    }
return 0;

}