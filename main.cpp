#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);

	for (int &i : v) cin >> i;

	sort(v.begin(), v.end());

	cout << v.back() << ' ';

	for (int i = 1; i < n-1; i++) {
		cout << v[i] << ' '; 
	}

	if (n != 1) cout << v.front();
}
