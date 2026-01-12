#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M, NN;
	cin >> N >> M;
	NN = N;
	vector <long long> arr;

	arr.push_back(0);
	for (int i = 0; i < N; i++) {
		long long n;
		cin >> n;
		arr.push_back(n);
	}

	for (int i = 1; i < NN + 1; i++) {
		arr[i] = arr[i - 1] + arr[i];
	}

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		cout << arr[b] - arr[a - 1] << '\n';
	}
}