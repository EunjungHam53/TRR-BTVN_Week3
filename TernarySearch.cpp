#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <queue>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <set>


using namespace std;

int a[1000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	int key; cin >> key;
	
	int r = n - 1;
	int l = 0;
	
	bool ret = false;
	while(r - l >= 0) {
		int m1 = l + (r - l) / 3;
		int m2 = r - (r - l) / 3;
		if(a[m1] == key) {
			cout << m1;
			ret = true;
			break;
		}
		if(a[m2] == key) {
			cout << m2;
			ret = true;
			break;
		}
		if(key < a[m1]) {
			r = m1 - 1;
		} else if(key > a[m2]) {
			l = m2 + 1;
		} else {
			l = m1 + 1;
			r = m2 - 1;
		}
	}
	if (!ret) cout << -1;
	
	// output tra ve la vi tri duoc dem tu 0 neu tim thay key, truong hop ko tim thay se in ra -1
	return 0;
}
