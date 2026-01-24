#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, time;
	vector <int> list;
	cin >> n;
	int N = n;

	while (n--) {
		cin >> time;
		list.push_back(time);
	}
	sort(list.begin(), list.end());
	int sum = list[0];
	for (int i = 1; i < N; i++) {
		list[i] += list[i - 1];
		sum += list[i];
	}
	cout << sum;
}