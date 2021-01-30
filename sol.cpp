#include <bits/stdc++.h>

using namespace std;
    
int main() {                          	
	ios::sync_with_stdio(false);
	cin.tie(0);          
	int n;
	cin >> n;     
	int one = 0;
	int two = 0;
	// check the image in this repository for better understanding
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		// count the frequency of 1 and 2
		if (a == 1) {
			one++;
		} else {
			two++;
		}    
	}
	if (one > two) {
		// this is the condition if the frequency of 1 is greater than 2
		// get the initial minimum number of groups that can be created
		int mn = min(one, two);
		// subtract the total frequency of 1 with the used frequency of 1
		one -= mn;          
		// divide the current frequency of 1 by 3 to see if there are additional groups that can be created
		mn += (one / 3);
		// add the remaining groups to mn (if there are any)
		cout << mn;
	} else {    
		// this is the condition if the frequency of 2 is greater than 1
		// just print one because in order to form a 3, 2 needs to be added to 1
		// so the number of groups that can be created depends on the frequency of 1
		cout << one;
	}     
	cout << '\n';
	return 0;
}