#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	set <string> set;
	string str;
	cin >> str;

	string save = "";
	for (int i = 0; i < str.length(); i++) {
		for (int j = i; j < str.length(); j++) {
			save += str[j];
			set.insert(save);
		}
		save = "";
	}
	cout << set.size() << '\n';
	return 0;
}