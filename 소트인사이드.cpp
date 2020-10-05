#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {
	string s;
	cin >> s;
	vector<int> N;
	for (int i = 0; i < s.length(); i++) {
		int in = s[i] - '0';
		N.push_back(in);
	}
	sort(N.begin(), N.end(), greater<int>());
	for (int i = 0; i < N.size(); i++) {
		cout << N[i];
	}


	return 0;
}