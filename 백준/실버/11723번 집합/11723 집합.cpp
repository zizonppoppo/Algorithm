#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n;
	string command;
	unordered_set <int> list;
	cin >> m;

	while (m--) {
		cin >> command;

		if (command == "add") {
			cin >> n;
			list.insert(n);
		}

		else if (command == "remove") {
			cin >> n;
			if (list.find(n) != list.end()) list.erase(n);
		}

		else if (command == "check") {
			cin >> n;
			if (list.find(n) != list.end()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}

		else if (command == "toggle") {
			cin >> n;
			if (list.find(n) != list.end()) list.erase(n);
			else list.insert(n);
		}

		else if (command == "empty") {
			list = { 0 };
		}

		else if (command == "all") {
			list = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
		}
	}
}