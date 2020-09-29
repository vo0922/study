#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool compare(int a, int b) {
	return a < b;
}
int main() {
	int N;
	cin >> N;
	vector<int> P(N);
	int p_sum = 0;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		P.push_back(a);
	}
	sort(P.begin(), P.end(), compare);

	for (int i = 0; i < P.size(); i++) {
		p_sum += P[i];
		sum += p_sum;
	}
	cout << sum;

	return 0;
}
