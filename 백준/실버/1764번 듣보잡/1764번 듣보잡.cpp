#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	int count = 0;
	string name;
	unordered_set <string> list;
	vector <string> name_list;
	
	cin >> n >> m;

	while (n--) {
		cin >> name;
		list.insert(name);
	}
	while (m--) {
		cin >> name;
		if (list.find(name) != list.end()) {
			count++;
			name_list.push_back(name);
		}
	}
	cout << count << '\n';
	sort(name_list.begin(), name_list.end());
	for (string s : name_list) {
		cout << s << '\n';
	}
}