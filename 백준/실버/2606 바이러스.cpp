#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	unordered_set<int> arr;
	int M;
	cin >> M;

	while (M--) {
		int x;
		string program;
		cin >> program;

		if (program == "add") {
			cin >> x;
			arr.insert(x);
		}

		else if (program == "remove") {
			cin >> x;
			arr.erase(x);
		}

		else if (program == "check") {
			cin >> x;
			if (arr.find(x) != arr.end()) {
				cout << 1 << '\n';
			}
			else cout << 0 << '\n';
		}

		else if (program == "toggle") {
			cin >> x;
			if (arr.find(x) != arr.end()) arr.erase(x);
			else arr.insert(x);
		}

		else if (program == "all") {
			unordered_set<int> arr = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
		}

		else unordered_set<int> arr = {};
	}
}