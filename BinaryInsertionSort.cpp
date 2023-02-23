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

int binarySearch(int a[], int l, int r, int key) {
	while(l <= r) {
		int mid = l + (r - l) / 2;
		if(key < a[mid]) {
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return l;
}

void insertionSort(int a[], int len) {
	for(int i = 1; i < len; i++) {
		int key = a[i];
		int need = binarySearch(a, 0, i - 1, key);
		for(int j = i - 1; j >= need; j--) {
			a[j + 1] = a[j];
		}
		a[need] = key;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n; cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	insertionSort(a, n);
	for(int i = 0; i < n; i++) cout << a[i] << " ";
	
	return 0;
}
