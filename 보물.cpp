#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> a, b;
	int a_, b_;
	for (int i = 0; i < N; i++) {
		cin >> a_;
		a.push_back(a_);
	}
	for (int i = 0; i < N; i++) {
		cin >> b_;
		b.push_back(b_);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<int>());
	int s = 0;
	for (int i = 0; i < N; i++) {
		s += a[i] * b[i];
	}
	cout << s;

	return 0;
}