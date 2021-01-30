#include <bits/stdc++.h>

using namespace std;
    
int main() {                          	
	ios::sync_with_stdio(false);
	cin.tie(0);          
	int n;
	cin >> n;     
	int one = 0;
	int two = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a == 1) {
			one++;
		} else {
			two++;
		}    
	}
	if (one > two) {
	  cout << two + (one - two) / 3;
	} else {    
		cout << one;
	}     
	cout << '\n';
	return 0;
}
