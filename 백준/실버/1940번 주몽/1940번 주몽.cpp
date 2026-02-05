#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M, x;
	cin >> N;
	cin >> M;
	vector <int> arr;
	int count = 0;
	int left = 0;
	int right = N - 1;

	for (int i = 0; i < N; i++) {
		cin >> x;
		arr.push_back(x);
	}

	sort(arr.begin(), arr.end());

	while (left < right) {
		int sum = arr[left] + arr[right];

		if (sum < M) left++;
		else if (sum > M) right--;
		else if (sum == M) {
			left++;
			right--;
			count++;
		}
	}

	cout << count;
}